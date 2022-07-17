#include<bits/stdc++.h>

using namespace std;

long long int multiplo(long long int a, long long int b)
{
    if(a%b==0)
    {
        return b;
    }else
    {
        b++;
        return multiplo(a, b);
    }
}

long long int calcula(long long int count, long long int a, long long int b)
{
    count++;

    if(a<b) 
    {
        return count;
    
    }else 
    {
        b = multiplo(a, b);

        return calcula(count, (int) floor(a/b), b);
    }
}

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        long long int a,b, ans;

        scanf("%lld %lld", &a, &b);

        if(a<b)
        {
            printf("1\n");
        }else if(a==b)
        {
            printf("2\n");
        }else
        {
            if(b==1)
            {
                printf("%lld\n", calcula(1, a, b+1));
            }else
            {
                //ans = calcula(0, a, b);
                //printf("%lld\n", a%b==0 ? ans-1 : ans);
                printf("%lld\n", calcula(0, a, b));
            }
        }
    }

    return 0;
}