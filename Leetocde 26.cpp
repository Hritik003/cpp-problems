class Solution {
public:
   
int removeDuplicates(vector<int>& nums) {
       int k=0;
        if(nums.size()<=1)
            return nums.size();
        for(auto it = nums.begin(); it < nums.end()-1; ++it){
            if(*it==*(it+1)){
                nums.erase(it);
                it--;
            }   
        }
        return nums.size();
    }
};
