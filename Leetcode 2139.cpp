class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(maxDoubles==0)return target+count-1;
            if(maxDoubles!=0 && target%2==0){target/=2;maxDoubles--;count++;}
            else if(target%2!=0) {target--;count++;}
        }
        return count;
    }
};
