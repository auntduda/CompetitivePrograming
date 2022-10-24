#include <stdio.h>

int abs(int n){
    if(n < 0) return n*(-1);
    return n;
}

int main(){
    int n, m, i, j;
    while(scanf("%d", &n) != EOF){
        scanf("%d", &m);
        int v[110][110], xp, yp, xa, ya;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d", &v[i][j]);
                if(v[i][j]==1){
                    xp = j;
                    yp = i;
                }
                if(v[i][j]==2){
                    xa = j;
                    ya = i;
                }
            }
        }
        printf("%d\n", abs(xa-xp)+abs(ya-yp));
    }
    
    return 0;
}