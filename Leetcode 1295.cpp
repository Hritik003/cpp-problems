class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int x : nums)
        {
            int k= length(x);
            if(k%2==0)
            {
                c++;
            }
        }
        return c;
    }
    int length(int x)
    {
        int count=0;
        while(x>0)
        {
            count++;
            x=x/10;

        }
        return count;
    }
    
};
