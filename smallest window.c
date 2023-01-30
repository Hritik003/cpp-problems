#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char w[1000];
    char s[1000];
    fgets(s, 1000, stdin);
    fgets(w, 1000, stdin);
    int warr[26] = {0};
    int wlen = strlen(w) - 1;
    int slen = strlen(s) - 1;
    for(int i = 0;i<wlen;i++)
        warr[w[i] - 'a']++;
    int winsize = 1001, start, end;
    for(int i = 0;i<slen;i++)
    {
        int sarr[26] = {0};
        for(int j = i;j<slen;j++)
        {
            if(s[j] < 'a')  continue;
            int flag = 0;
            sarr[s[j] - 'a']++;
            for(int k = 0;k<26;k++)
            {
                if(sarr[k] < warr[k])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                if(winsize > (j - i + 1))
                {
                    winsize = j - i + 1;
                    start = i;
                    end = j;
                }
                break;
            }
        }
    }
    printf("%d %d\n", start, end);
    for(int i = start;i<=end;i++)
        printf("%c", s[i]);
    return 0;
}
