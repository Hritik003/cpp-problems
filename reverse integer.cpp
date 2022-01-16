class Solution {
public:
    int reverse(int x) {
        if(x!=0)
        {
            int rev=0,p;
            while(x!=0)
            {
                p =x%10;
                rev = rev*10 +p;
                x=x/10;
                
            }
            return rev;
          
        }
        else
        return 0;
    }
};
