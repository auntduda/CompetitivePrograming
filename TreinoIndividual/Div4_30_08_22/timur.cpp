#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, t=0, i=0, m=0, u=0, r=0;

    scanf("%d", &k);

    while(k--)
    {
        scanf("%d", &n);

        string s;

        cin >> s;

        for(int j=0; j<s.length(); j++)
        {
            if(s[i]=='T')
            {
                t++;
            }else if(s[i]=='i' && s[i]!='I')
            {
                i++;
            }else if(s[i]=='m' && s[i]!='M')
            {
                m++;
            }else if(s[i]=='u' && s[i]!='U')
            {
                u++;
            }else if(s[i]=='r' && s[i]!='R')
            {
                r++;
            }
        }

        if((t+i+m+u+r)==5 && s!="TIMUR")
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }

        t=0; i=0; m=0; u=0; r=0;
    }

    return 0;
}