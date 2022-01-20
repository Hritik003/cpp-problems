class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high = nums.size()-1,mid;
        while(high-low>=0)
        {
            mid= (high + low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>target)
            {
                high = mid-1;

                
            }
            else low = mid+1;
 
        }
        return high +1;
        
    }
};
