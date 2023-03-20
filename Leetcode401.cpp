class Solution {
public:
vector<string>ans;
    vector<string> readBinaryWatch(int turnedOn) {
        for(int hours=0;hours<12;hours++){
            for(int min=0;min<60;min++){
                if(__builtin_popcount(hours)+__builtin_popcount(min)==turnedOn){
                   string curr= to_string(hours) + ":";
                    if(min<10){
                        curr+="0";
                    }
                        curr+=to_string(min);
                        ans.push_back(curr);
                }
            }
        }
        return ans;

    }
  
};
