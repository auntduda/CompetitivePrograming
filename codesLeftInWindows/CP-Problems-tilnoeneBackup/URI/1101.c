#include <stdio.h>

int main(){
    int m, n, soma, i, temp;
    while(1){
        scanf("%d %d", &n, &m);
        if(m<=0 || n<=0){
            break;
        }
        if(m>n){
            temp=n;
            n=m;
            m=temp;
        }
        soma=0;
        for(i=m;i<=n;i++){
            soma+=i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", soma);
    }

    return 0;
}