#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,c, ans=0, flag=0;

    scanf("%d %d", &r, &c);

    char cake[r+1][c+1];

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            scanf("%c", &cake[i][j]);

            if(cake[i][j]=='S')
            {
                flag=1;
            }
        }

        if(flag)
        {
            ans-=r;
        }else{
            ans+=r;
        }

        flag=0;
    }

    printf("%d\n", ans);

    return 0;
}