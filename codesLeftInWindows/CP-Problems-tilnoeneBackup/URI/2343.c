#include <stdio.h>

int main(){
    int n, mapa[510][510], a, b, i, j;
    scanf("%d", &n);
    
    for(i = 0; i < 510; i++){
        for(j = 0; j < 510; j++){
            mapa[i][j] = 0;
        }
    }
    
    int tot = 0;
    while(n--){
        scanf("%d %d", &a, &b);
        if(mapa[a][b] == 1)
            tot += 1;
        
        mapa[a][b]++;
    }
    
    if(tot > 0) printf("1\n");
    else printf("0\n");
    
    return 0;
}