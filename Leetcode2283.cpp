class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char , int> hash;
        for(int i=0;i<num.size();i++)
        {
            hash[num[i]]++;

        }
        for(int i=0;i<num.size();i++)
        {
            char ch = '0' + i;
            if(num[i] != '0' + hash[ch])
            {
                return false;
            }

        }
        return true;
    }
};
