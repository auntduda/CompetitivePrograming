#include<bits/stdc++.h>

using namespace std;

int tab[1010][1010];
int caiu=0;

void TCHAKABUM(int x, int y){
    if(tab[x][y] == 1){
        caiu++;
        tab[x][y] = 0;
    }
    if(tab[x+1][y] == 1){
        caiu++;
        tab[x+1][y] = 0;
    }
    if(tab[x-1][y] == 1){
        caiu++;
        tab[x-1][y] = 0;
    }
    if(tab[x][y+1] == 1){
        caiu++;
        tab[x][y+1] = 0;
    }
    if(tab[x][y-1] == 1){
        caiu++;
        tab[x][y-1] = 0;
    }
}

int main(){
    int n, m, q;

    scanf("%d %d %d", &m, &n, &q);

    for(int i=0; i<m; i++){
        int xn, yn;

        scanf("%d %d", &xn, &yn);

        tab[xn][yn] = 1;
    }

    for(int i=0; i<q; i++){
        int xm, ym;

        scanf("%d %d", &xm, &ym);

        TCHAKABUM(xm, ym);
    }

    printf("%d\n", caiu);

    return 0;
}