#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, ans=0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &x);

        if(x%7 == 1)
        {
            ans = ((x/7)-1) + 2;
        }else{
            ans = x/7 + 1;
        }

        printf("%d\n", ans);
    }

    return 0;
}