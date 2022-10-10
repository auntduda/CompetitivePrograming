#include<bits/stdc++.h>

using namespace std;

#define lli long long

bool myfunction (lli a,lli b)
{
    return (a>b);
}

int main()
{
    int n, e=0, o=0, k;

    scanf("%d", &n);

    vector<lli> v;
    vector<lli> ans;

    for(int i=0; i<n; i++)
    {
        lli aux;
        scanf("%lld", &aux);

        v.push_back(aux);
    }

    sort(v.begin(), v.end());
    
    for(int i=0; i<n/2; i++)
    {
        ans.push_back(v[i]);
        ans.push_back(v[n-1-i]);
    }

    if(n%2)
    {
        ans.push_back(v[n/2]);
    }

    for(int i=0; i<n; i++)
    {
        printf("%lld ", ans[i]);
    }
    printf("\n");

    return 0;
}