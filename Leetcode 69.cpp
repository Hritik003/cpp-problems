class Solution {
public:
    int mySqrt(int x) {
        

   int low =0;
   int high = x;
   long long int mid;
   while(high - low >=0)
   {
       mid = (high+low) /2;
       if(mid*mid == x)
       {
           return mid;
       }
       if(mid*mid < x)
       {
           low = mid+1;
       }
       else
       {
           high = mid-1;
       }
   }
   
   return high;

    
}
    
};
