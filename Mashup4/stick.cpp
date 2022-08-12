#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long x, y;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld %lld", &x, &y);

        long long count=0;

        while((x<y || x!=y) && x>0)
        {
            if(x%2==0) x = x*(1.5);
            else x--;

            count++;

            if(count>100000009) break;
        }

        if(x==y || x>y)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
    }

    return 0;
}