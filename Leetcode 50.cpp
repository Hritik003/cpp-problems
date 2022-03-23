class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0)
        {
            return 1;
        }
        else if(n==1)
        {
            return x;
        }
        else if(n<0)
        {
            x=1/x;
            n = abs(n);
        }
        double num = x;
       
        for(int i=2;i<=n;++i)
        {
           x=x*num;
        }
       
        return x;
        
    }
};
