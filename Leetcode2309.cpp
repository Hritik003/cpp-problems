class Solution {
public:
    string greatestLetter(string s) {
        string res="";        
        unordered_map<char,int> hash;
        for(char x:s){
            hash[x]++;
        }
        sort(s.begin(),s.end());
        for(int i=s.size()-1;i>=0;--i){
            char ch1= toupper(s[i]);
            char ch2= tolower(s[i]);
            if(hash[ch1]>0 && hash[ch2]>0){
                res=ch1;
                break;
            }
        }        
         return res;        
    }
};
