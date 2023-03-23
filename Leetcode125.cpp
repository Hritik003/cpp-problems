class Solution {
public:
    bool isPalindrome(string s) {
       int n=s.size();
       if(n==1)return true;
       string str = "";
       for(int i=0; i<n; i++) if(isalnum(s[i])) str +=s[i];
       transform(str.begin(),str.end(),str.begin(),::tolower);
       int i=0,j=str.size()-1;
       while(i<j){
           if((str[i])!=(str[j]))return false;
           i++;
           j--;
       }
       return true;
    }
};
