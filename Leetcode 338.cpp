class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;++i)
        {
            int c = one_count(i);
            v.push_back(c);
        }
        return {v};
        
    }
    int one_count(int n)
    {
        int count=0;
        if(n==0)return 0;
        else if(n==1) return 1;
        else 
        {
            while(n>0)
           {
                int rem = n%2;
                if(rem==1) count++;
                n=n/2;
             }
        }
        return count;
    }
};
