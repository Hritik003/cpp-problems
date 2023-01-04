class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
      
        cout<<f(0,nums,0,target,nums.size());
        return 0;
    }
    int f(int i,  vector<int> &nums, int sum,int target,int n){
        if(i>=n){
            if(sum == target)return 1;
            else return 0;
        }

        sum+=nums[i];
        int l = f(i+1,nums,sum,target,n);

        sum-=nums[i];
        int r = f(i+1,nums,sum,target,n);
        return l+r;
    }
};
