class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        int row = score.size();
        vector<pair<int,int>>hash;
        for(int i=0;i<row;i++ ){
            hash.push_back({score[i][k],i});
            temp.push_back(score[i][k]);
        }
        sort(hash.begin(),hash.end());
        reverse(hash.begin(),hash.end());
      
         for(auto x : hash ){
             
             res.push_back(score[x.second]);
         }
        return res;
        
    }
};
