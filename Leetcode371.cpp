class Solution {
public:
    int getSum(int a, int b) {
        unsigned int c;
        while(c){
            c = a&b;
            a = a ^ b;
            b = c<<1;
        }
        return a;
    }
};