#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        char grid[2][n];
        int up=0, down=0;
        
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%c", &grid[i][j]);
            }
        }

        for(int i=0; i<n; i++)
        {
            if(grid[0][i]=='R')
            {
                up++;
            }
            
            if(grid[1][i]=='R')
            {
                down++;
            }
        }

        if(up==down)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }

        up=0; down=0;
    }

    return 0;
}