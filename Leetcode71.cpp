class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;   // Stack is going to store folders
        string ans="";  // Answer path
        for(int i=0;i<path.length();i++){  // Traversing through string
            if(path[i] == '/'){  // We always going to ignore '/'
                continue;
            }
            string temp="";  // We are gonna store folder names in temp
            while(i<path.length() && path[i] != '/'){  // To store names we use this while loop
                temp += path[i];
                i++;
            }
            if(temp == ".") continue;  // If we get a single '.' then there is no need of pushing in stamp
            else if(temp == ".."){  // This means that we have to go up in path
                if(!st.empty()) st.pop();  // To go up we have to pop
            }
            else{
                st.push(temp);  // If we get no . or .. that means we got the name of the folder
            }           
        } 
        if(st.empty())  ans = '/';  // If there is nothing in our stack then we just need to return /;
        while(!st.empty()){  // If we have something in stack then we have to give in this order "/home/xyz/abc" etc
            ans = '/' + st.top() + ans;  // For that I am using this 
            st.pop();
        }       
        return ans;  // Returning the resulting string 
    }
};
