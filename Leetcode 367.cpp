class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        int root;
        long long low =2,mid;
        long long int high = num;
        while(high >=low)
        {
            mid = (high +low)/2;
            if(mid*mid == num)
            {
               return true;
            }
            else if(mid*mid < num)
            {
                low = mid+1;

            }
            else high = mid-1;
        }
        
        return false;
        
        
    }
};
