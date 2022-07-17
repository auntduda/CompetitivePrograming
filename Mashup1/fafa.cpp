#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main()
{
    int n, ans=0;

    scanf("%d", &n);

    for(int i=1; i<n; i++)
    {
        if((n-i)%i==0)
        {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}