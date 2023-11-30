#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, sa=0, sb=0;

    scanf("%d %d %d", &n, &a, &b);

    if((a+b)==n)
    {
        printf("1\n");
    }else
    {
        if(a/n>=0)
        {
            sa = a%n;

            if(b/n>=0)
            {
                sb = b%n;

                if((sa+sb)>=n)
                {
                    printf("%d\n", ((a/n)+(b/n)+(sa+sb)/n)-1);
                }else
                {
                    printf("%d\n", (a/b)+(b/n));
                }
            }else
            {
                printf("%d\n", a/n);
            }
        }else if(b/n>=0)
        {
            sb = b%n;

            if(a/n>=0)
            {
                sa = a%n;

                if((sa+sb)>=n)
                {
                    printf("%d\n", ((a/n)+(b/n)+(sa+sb)/n)-1);
                }else
                {
                    printf("%d\n", (a/b)+(b/n));
                }
            }else
            {
                printf("%d\n", b/n);
            }
        }else
        {
            printf("essa logica ta errada\n");
        }
    }

    return 0;
}