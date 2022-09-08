class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int res=0; 
        unordered_map<int,int> hash;
        int s = nums.size();
        for( auto x: nums){
            hash[x]++;
        }
        for(int i=0;i<s;i++){            
                if(hash[nums[i]-3]>0 && hash[nums[i]+3]>0){
                    res++;
                
            }
        }
        return res;
    }
};
