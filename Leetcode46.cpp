class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>  ds;
        unordered_map<int,int>map;
        f(0,ds,nums,res,map);
        return res;
    }
    void f(int ind, vector<int> &ds , vector<int> &nums , vector<vector<int>> &res, unordered_map<int,int> &map){
        if(ds.size()==nums.size()){
            res.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])==map.end()){
                ds.push_back(nums[i]);
                map[nums[i]]=1;
                f(i+1,ds,nums,res,map);
                map.erase(nums[i]);
                ds.pop_back();
            }
        }
    }
};
