class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<int>adj[K];
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            int len = min(s1.size(),s2.size());
            for(int ptr=0;ptr<len;ptr++){
                if(s1[ptr]!=s2[ptr]){
                    adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');\
                    break;
                }
            }
        }
        
        int n = K;
        vector<int>indegree(n);
        for(int i=0;i<n;i++){
            for(auto it:adj[i])indegree[it]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        
        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        
        string res="";
        for(auto x : topo)res+=char(x+'a');
        return res;
        
        
        
    }
};
