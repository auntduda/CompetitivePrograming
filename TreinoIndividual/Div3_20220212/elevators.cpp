#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        long long a, b, c, el2;

        scanf("%lld %lld %lld", &a, &b, &c);

        if(b==1)
        {
            el2 = 2*abs(b-c);
        }else{
            if(b>c)
            {
                el2 = b-1;
            }else
            {
                el2 = abs(b-c) + (c-1);
            }
            
        }

        if(a-1<el2 || a==1)
        {
            printf("1\n");
        }else if(a-1>el2)
        {
            printf("2\n");
        }else{
            printf("3\n");
        }
    }

    return 0;
}