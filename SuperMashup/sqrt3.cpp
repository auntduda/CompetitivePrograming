#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    scanf("%lld", &n);

    if(n==0)
    {
        printf("0\n");

        return 0;
        
    }else
    {
        for(int i=1; i<=1000000; i++)
        {
            if(pow(pow(i,i),i)==n)
            {
                printf("%d\n", i);

                return 0;
            }
        }
    }
}