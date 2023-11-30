#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    char grid[10][10];
    memset(grid, '.', 100*sizeof(char));

    while(t--)
    {
        int red=0, blue=0, red2blue=0, blue2red=0;

        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                scanf("%c", &grid[i][j]);

                if(grid[i][j]=='R') red++;
                else if(grid[i][j]=='B') blue++;

                if(grid[i][j]=='R' && grid[i][j-1]=='B') red2blue++;
                else if(grid[i][j]=='B' && grid[i][j-1]=='R') blue2red++;

                if(grid[i][j]=='R' && grid[i-1][j]=='B') red2blue++;
                else if(grid[i][j]=='B' && grid[i-1][j]=='R') blue2red++;

                if(grid[i][j]=='R' && grid[i][j+1]=='B') red2blue++;
                else if(grid[i][j]=='B' && grid[i][j+1]=='R') blue2red++;

                if(grid[i][j]=='R' && grid[i+1][j]=='B') red2blue++;
                else if(grid[i][j]=='B' && grid[i+1][j]=='R') blue2red++;
            }
        }

        printf("red: %d\nblue: %d\n", red, blue);

        if(red>blue)
        {
            printf("R\n");
        }else if(red<blue)
        {
            printf("B\n");
        }else{
            if(red2blue>blue2red) printf("R\n");
            else if(red2blue<blue2red) printf("B\n");
            else printf("nao faco ideia\n");
        }
    }

    return 0;
}