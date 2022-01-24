
class Solution {
public:
    bool isPalindrome(long int x) {
        long int num=x;
        long int rem,val=0;
        while(num>0){
            rem = num%10;
            val = val*10 + rem;
            num = num/10;
        }
        if(x==val)
            return true;
        else
            return false;
    }
};
    
