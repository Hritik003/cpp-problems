class Solution {
public:
    map<int,string>hash;
    vector<string>ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="")return ans;
        hash[2] = "abc";
        hash[3] = "def";
        hash[4] = "ghi";
        hash[5] = "jkl";
        hash[6] = "mno";
        hash[7] = "pqrs";
        hash[8] = "tuv";
        hash[9] = "wxyz";
        string curr;
        freq(0,curr,digits);
        return ans;
    }

    void freq(int i, string curr, string dig){
        if(i==dig.size())ans.push_back(curr);

        for(auto x : hash[dig[i]-'0']){
            freq(i+1,curr+x,dig);
        }
    }
};
