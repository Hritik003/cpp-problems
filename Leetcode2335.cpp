class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count=0;
        sort(amount.begin(),amount.end());
        while(amount[1]!=0){
            count++,amount[1]--,amount[2]--;
            sort(amount.begin(),amount.end());
        }
        return count+amount[2];
        
    }
};
