class Solution {
    vector<vector<string>> ans;
    string b;
private:
    void dfs(string word, vector<string>&seq, unordered_map<string,int>&hash){
        if(word == b){
            reverse(seq.begin(),seq.end());
            ans.push_back(seq);
            reverse(seq.begin(),seq.end());
            return;
        }
        int steps = hash[word];

         for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch ='a';ch<='z';ch++){
                    word[i]=ch;
                    if(hash.find(word)!=hash.end() && steps == 1+hash[word]){
                        seq.push_back(word);
                        dfs(word,seq,hash);
                        seq.pop_back();
                    }
                }
                word[i]=original;
            }
    }    
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {


        //step 1: create a map for storing level paths
        queue<string>q;
        b=beginWord;
        unordered_map<string,int>hash;
        unordered_set<string>s(wordList.begin(),wordList.end());
        s.erase(beginWord);
        q.push(beginWord);
        hash[beginWord]=0;
        while(!q.empty()){
            string word = q.front();
            int step = hash[word];
            q.pop();
            if(word == endWord)break;

            for(int i=0;i<word.size();i++){
                char original = word[i];
                for(char ch ='a';ch<='z';ch++){
                    word[i]=ch;
                    if(s.find(word)!=s.end()){
                        hash[word]=step+1;
                        s.erase(word);
                        q.push(word);
                    }
                }
                word[i]=original;
            }

        }

        //step 2: backtrack in the map
        if(hash.find(endWord)!=hash.end()){
            vector<string>seq;
            seq.push_back(endWord);
            dfs(endWord,seq,hash);
        }
        return ans;

    }
};
