class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> hash;
        for(char x: s)hash[x]++;     
        for(auto x: s){
            if(hash[x]!= hash[s[0]]){
              return false;
            }  
        }
        return true;
     }
};
