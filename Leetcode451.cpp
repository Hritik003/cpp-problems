class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hash;
        string res;
        for(auto x : s){
            hash[x]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i: hash){
            pq.push({i.second , i.first});
        }
        
        while(!pq.empty()){
            res+= string(pq.top().first , pq.top().second);
            pq.pop();
        }
        
        return res;               
    }
};
