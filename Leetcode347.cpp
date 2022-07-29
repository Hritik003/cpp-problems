class Solution {
public:
    bool cmp(pair<int,int> a,pair<int,int> b){
      return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int>hash;
        priority_queue<pair<int,int>> heap;
        
        //hashing
        for(int x : nums)hash[x]++;
        //storing the frequency in the descending through the priority queue
        for(auto i: hash){
            heap.push({i.second, i.first});

        }
        
        //storing the top-> second in the res and popping the top
        for(int y = 0 ;y<k;y++){
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
