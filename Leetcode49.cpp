class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>hash;
        string s,t;
        for(auto x : strs){
            s=x;
            sort(s.begin(),s.end());
            hash[s].push_back(x);
        }
        for(auto x : hash){
            
            v.push_back(x.second);
        }
        return v;
        
        
    }
};
