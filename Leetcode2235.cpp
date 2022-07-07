class Solution {
public:
    string decodeMessage(string key, string message) {     
        string res;
        char a ='a';
        unordered_map<char,char>hash;
        hash[' ']=' ';
        for(char c: key){            
            if(c!=' '&& !hash[c]){                
                hash[c]=a++;
            }                      
        }      
        for(char x : message){
            res=res+char(hash[x]);            
        }
        return res;        
    }
};
