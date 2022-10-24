#include <stdio.h>

int main(){
    int x, y;
    while(1){
        scanf("%d %d", &x, &y);
        if(x==y){
            break;
        }
        if(x>y){
            puts("Decrescente");
        } else{
            puts("Crescente");
        }
    }

    return 0;
}