#include<bits/stdc++.h>

using namespace std;

#define int long long

int main()
{
    int t, n, i, j;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        string bin;

        cin >> bin;

        for(i=0; i<n; i++)
        {
            if(bin[i]=='1')
            {
                break;
            }
        }

        for(j=n-1; j>0; j--)
        {
            if(bin[j]=='0')
            {
                break;
            }
        }

        if(i==j)
        {
            cout << bin << endl;
        }else
        {
            cout << bin.substr(0,i) << '0' << bin.substr(j) << endl;
        }
    }

    return 0;
}