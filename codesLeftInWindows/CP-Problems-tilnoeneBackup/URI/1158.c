#include <stdio.h>

int main(){
    int n, i, j, x, y, soma;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        if(x%2==0){
            x++;
        }
        soma=0;
        for(j=0;j<y;j++){
            soma+=x;
            x+=2;
        }
        printf("%d\n", soma);
    }

    return 0;
}