#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    long long int k, b, s;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %lld %lld %lld", &n, &k, &b, &s);

        vector<long long int> a (n, s/n);

        if(s%n!=0)
        {
            for(int i=0; i<s%n; i++)
            {
                a[i]++; //preenchendo os elementos do array com o resto da divisao (pra dar a soma s)
            }
        }

        long long int beauty=0;

        for(int i=0; i<n; i++)
        {
            beauty += a[i]/k;

            if(beauty>b) //refazendo o deslocamento de quantidade pra outros indices, pra manter a soma e ainda conseguir exatamanete b
            {
                beauty -= a[i]/k + (a[0]/k);
                a[0] += a[i]%k + 1;
                a[i] = a[i]%k;
                beauty += a[i]/k + (a[0]/k);
            }
        }

        beauty=0;

        for(int i=0; i<n; i++)
        {
            beauty += a[i]/k;

            if(beauty>b) 
            {            
                beauty -= a[i]/k + (a[0]/k);
                a[0] += a[i]%k + 1;
                a[i] -= a[i]%k + 1;
                beauty += a[i]/k + (a[0]/k);
            }
        }

        long long int vecSum = accumulate(a.begin(), a.end(), 0);

        if(beauty!=b || vecSum!=s)
        {
            printf("-1\n");
        }else
        {
            for(int i=0; i<n; i++)
            {
                printf("%lld ", a[i]);
            }
            printf("\n");
        }
    }

    return 0;
}