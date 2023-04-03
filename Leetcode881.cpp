class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        while(i<j){
            
            if(people[i]+people[j]<=limit){
                count++;
                i++;
                j--;
            }
            else{
                j--;
                count++;
            }
        }
        if(i==j){
            return count+1;
        }
        return count;
    }
};
