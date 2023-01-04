class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
         vector<int> ds;
         sort(candidates.begin(),candidates.end()); // sorting before removing unique element via below method
         candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end()); // remove non unique              
         check(0,target, candidates , ans, ds);
         return ans;
    }

    void check(int i, int t, vector<int> &arr, vector<vector<int>> ans, vector<int> ds){
        if( t==0){
            ans.push_back(ds);
            return;
        }
        if(arr[i]<=t && i < arr.size()){
            ds.push_back(arr[i]);
            check(i+1,t-arr[i],arr,ans,ds);
            ds.pop_back();
            
        }

    }
};

