/*
    Problem: https://codeforces.com/problemset/problem/1174/B - Ehab Is an Odd Person
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<long long> a(n);
    bool odd=false, even=false;

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
        if(a[i]%2==1) odd=true;
        else if(a[i]%2==0) even=true;
    }

    if(odd==true && even==true)
    {
        sort(a.begin(), a.end());

        for(int i=0; i<n; i++) printf("%lld ", a[i]);

        printf("\n");
    }else
    {
        for(int i=0; i<n; i++) printf("%lld ", a[i]);

        printf("\n");
    }

    return 0;
}