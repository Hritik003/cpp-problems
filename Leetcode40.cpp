class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int>data;
        f(0,target,ans,data,candidates);
        return ans;      

    }
    void f(int i, int t, vector<vector<int>> &ans, vector<int> &data, vector<int> &arr){
        if(t==0){
            ans.push_back(data);
            return;
        }
        for(int j =i;j<arr.size();j++){
            if(j>i &&arr[j]==arr[j-1])continue;
            if(arr[j]>t) break;
            data.push_back(arr[j]);
            f(j+1,t-arr[j],ans,data,arr);
            data.pop_back();
        }
    }
};
