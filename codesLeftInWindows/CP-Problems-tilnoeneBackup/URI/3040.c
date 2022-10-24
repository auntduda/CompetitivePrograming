#include <stdio.h>

int main(){
    int i, n, a, b, c;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a>=200 && a<=300 && b>=50 && c>=150){
            printf("Sim\n");
        } else{
            printf("Nao\n");
        }
    }

    return 0;
}