class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stack;        
        for(auto x : logs){
            if(x=="../"){
                if(!stack.empty()){
                stack.pop();
                }
            }
            else if(x=="./"){
                continue;
            }
            else{
                stack.push(x); 
            }
        }               
        return stack.size();
    }
};
