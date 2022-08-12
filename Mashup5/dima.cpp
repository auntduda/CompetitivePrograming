#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, great=-3;
    int type=-1;

    scanf("%lld %lld", &n, &k);

    vector<long long int> a;

    for (int i: k)
    {
        long long int aux
        scanf("%lld", &aux);
        a.push_back(aux);
    }

    for(int i: k)
    {
        if(n/a[i]>great)
        {
            great = n/a[i];
            type = i;
        }
    }

    pritnf("%lld %lld\n", type, great);
}