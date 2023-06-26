class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        if(n){return find(nums,n);}
        return true;
        
    }

    bool find(vector<int>& nums,int n){
        int sum=0;
        int i,j;

        for(auto x : nums)sum+=x;

        if(sum%2!=0)return false;
    
        bool t[n+1][sum/2 +1];
        //intiliazation

        for(i=0;i<n+1;i++)t[i][0]=true;
        for(j=1;j<(sum/2)+1;j++)t[0][j]=false;


        for(i=1;i<n+1;i++){
            for(j=1;j<(sum/2)+1;j++){   
                             
                if(nums[i-1]<=j)t[i][j]= t[i-1][j-nums[i-1]] || t[i-1][j];
                else  t[i][j]=t[i-1][j];                
            }
        }
        
        return t[n][sum/2];
    }

    // bool subsetsum(vector<int> & nums,int n, int sum){
    //     if(sum==0)return true;
    //     if(n==0) return false;

    //     if(nums[n-1]<=sum)return subsetsum(nums,n-1,sum-nums[n-1]) || subsetsum(nums,n-1,sum);

    //     return subsetsum(nums,n-1,sum);

    // }
};
