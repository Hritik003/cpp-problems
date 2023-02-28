class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool>hash;
        while(n!=1 && !hash[n]){
            hash[n]=true;
            n=sq(n);
        }
        return n==1;
    }
    int sq(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
};
