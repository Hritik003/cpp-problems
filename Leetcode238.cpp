  class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,zero=0;
        vector<int>ans;
        for(auto x : nums){
            if(x){
            product*=x;
            }
            else {zero++;}
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] && !zero)ans.push_back(product/nums[i]);
            else if(nums[i] && zero){ans.push_back(0);}
             else if(nums[i]==0 && (zero-1))ans.push_back(0);
            else ans.push_back(product);
        }
        
        return ans;
    }
};
