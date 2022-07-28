class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> box;
        int max = 0;
        for(int i=lowLimit; i<=highLimit ; ++i ){
            int s = getSum(i);
            box[s]++;   
            if(box[s]>max){
                max = box[s];
            }            
        }
        
        return max;
    }
    
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
};
