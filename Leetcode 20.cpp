class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,int> symbols = {{'(',-3},{'[',-2},{'{',-1},{')',3},{']',2},{'}',1}};
   
        stack<char> st;
        for(char bracket : s)
        {
            if(symbols[bracket]<0)
            {
                st.push(bracket);
            }
            else
            {
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
            }
            if((symbols[st.top()]+symbols[bracket]) != 0) return false;

        }
        
       return st.empty();
        
    }
    
};
