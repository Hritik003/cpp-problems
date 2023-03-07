class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        freq("",0,n,0,0,ans);
        return ans;
    }

    void freq(string s, int index, int n , int o , int c, vector<string> &result){
        if(o==(n)&&c==(n)){
            result.push_back(s);
            return;
        }
        if(o<n)freq(s+'(',index+1,n,o+1,c,result);
        if(o>c)freq(s+')',index+1,n,o,c+1,result);
    }
};
