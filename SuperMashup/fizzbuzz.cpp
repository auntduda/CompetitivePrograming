#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    scanf("%lld", &n);

    n = n - (n/3) - (n/5) + (n/15);

    printf("%lld\n", n);

    return 0;
}