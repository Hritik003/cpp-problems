
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(int i=0; i<nums.size(); i++)
        {
            auto it=m.find(nums[i]);
            if(it!=m.end())
            {
                it->second= i-it->second; //diff between indices for same elem
                if(it->second<=k)
                {
                    return true;
                }
            }
            else
            {
                m.insert({nums[i],i});
            }
        }
        return false;
    }
};

