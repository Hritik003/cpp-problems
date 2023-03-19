class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n){
            return time+1;
        }
        bool right = true;
        int pos=1;
        for(int i=1;i<=time;i++){
            if(right){
                pos+=1;
            }
            else pos-=1;
            
            if(pos==1 || pos==n){
                right = !right;
            }
        }
        return pos;
    }
};
