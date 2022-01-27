class Solution {
public:
    bool checkPerfectNumber(int num) {
       
        long long int sum=0;
        for(int i=1;i<num;++i)
        {
            if(num%i==0)
            {
                div.push_back(i);
                sum=sum+i;

            }

        }
       
        
        if(sum==num) return true;
        return false;
        
    }
};

