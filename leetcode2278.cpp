class Solution {
	public:
    int percentageLetter(string s, char letter) {
        unordered_map < char , int > hash;
        for(char x : s)
        {
            hash[x]++;
        }
        int p = hash[letter];

        return (p*100/s.size());

    }
};
