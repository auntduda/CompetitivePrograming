#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, great=-3;
    int type=-1;

    scanf("%lld %lld", &n, &k);

    vector<long long int> a;

    for (long long int i=0; i<k; i++)
    {
        long long int aux;
        scanf("%lld", &aux);
        a.push_back(aux);
    }

    for(long long int i=0; i<k; i++)
    {
        if(n/a[i]>great)
        {
            great = n/a[i];
            type = i;
        }
    }

    printf("%d %lld\n", type+1, great);
}