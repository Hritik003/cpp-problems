class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<char>ans;
        
        ans.push(num[0]);
        for(int i=1;i<num.size();i++){
            char x = num[i];
            while(k>0 && !ans.empty() && x<ans.top()){
                ans.pop();
                k--;
            }
            ans.push(x);
            if(ans.size()==1 && x=='0')ans.pop();            
        }


        //incase if k is not yet zero
        while(k>0 && !ans.empty())
        {
            --k;
            ans.pop();
        }

         

        string res;
        while(!ans.empty()){
            res+=ans.top();
            ans.pop();
        }

        //if res is empty
        if(res==""){
            return "0";
        }

        reverse(res.begin(),res.end());
        return res;


    }
};
