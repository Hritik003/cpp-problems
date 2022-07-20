class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> hash;
        for(char x: s){
            hash[x]++;
        }
        int res=0;
        bool flag=true;
		while(flag){
			for(char c:target){
				hash[c]--;
				if(hash[c]<0) flag=false;
			}
			if(flag==true) res++;
		}
        return res;
    }
};
