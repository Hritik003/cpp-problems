class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pairs=0,left=0;
        unordered_map<int,int>hash;
        for(int x: nums){
            hash[x]++;
        }
        for(auto y: hash){
           pairs += (y.second)/2;
           left += (y.second)%2; 
        }
        return {pairs, left};
        
    }
};
