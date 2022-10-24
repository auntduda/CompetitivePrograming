#include <stdio.h>

int main(){
    int n, x, d, maria, joao, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        maria = 0;
        joao = 0;
        for(j=0;j<3;j++){
            scanf("%d %d", &x, &d);
            joao+=x*d;
        }
        for(j=3;j<6;j++){
            scanf("%d %d", &x, &d);
            maria+=x*d;
        }
        if(joao>maria){
            printf("JOAO\n");
        } else{
            printf("MARIA\n");
        }
    }

    return 0;
}