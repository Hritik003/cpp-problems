class Solution {
public:
    int minOperations(int n) {
        int i=1;
        int count=0;
        int mid = 2*((n)/2)+1;
        int j = 2*(n-1)+1;
        while(i<(mid) && j>(mid)){
            count+=(j-i)/2;
            j-=2;
            i+=2;
        }
        return n%2?count:count+1;

    }
};
