[200~class Solution {
	public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8)return false;
        unordered_map<char,int> hash;
        char s,c,m,d;
        bool special=false, cap=false, small=false, digit=false;
        for(char x : password){
            hash[x]++;
        }
        for(int i=0;i<password.size();i++)
        {
            if(i>0 && password[i]==password[i-1])return false;
            if( password[i]>='A' && password[i]<='Z')
            {
                cap = true;
            }
            else if(password[i]>='a' && password[i]<='z')
            {
                small = true;
            }
            else if( password[i]>='0' && password[i]<='9')
            {
                digit = true;
            }
            else{
                special = true;
            }


        }

        if(special && cap && small && digit)
        {
            return true;
        }


        return false;

    }
};
