class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map< string , int> hash;
        int max =0; string result;
        for(int i=0;i<senders.size();++i)
        {
            int words = length(messages[i]) + 1;
            hash[senders[i]] += words;
            int total = hash[senders[i]];
            if(total > max || (total == max && senders[i]>result))
            {
                max = total;
                result = senders[i];
            }
            
        }
        return result;
        
       
        
    }
    
    int length(string s)
     {
    int count=0;
    for(int i=0;s[i]!='\0';++i)
    {
        if(s[i]==' ')
        count++;
    }
    return count;
    

    }
    
};


