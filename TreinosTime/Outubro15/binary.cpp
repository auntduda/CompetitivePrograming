#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    long long ans=0;

    if(s.size()!=1)
    {
        if(s[s.size()-1]=='1')
        {
            ans++;
        }

        /*for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='1')
            {
                s[i+1]='1';
                ans++;
            }
        }*/

        ans+=(s.size()-1);

    }

    printf("%lld\n", ans);

    return 0;
}