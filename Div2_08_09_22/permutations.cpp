#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            for(int i=n-2; i>=1; i--)
            {
                printf("%d ", i);
            }

            printf("%d %d\n", n-1, n);
        }else
        {
            for(int i=n-2; i>=4; i--)
            {
                printf("%d ", i);
            }

            printf("1 2 3 %d %d\n", n-1, n);
        }
    }

    return 0;
}