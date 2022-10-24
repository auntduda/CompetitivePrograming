#include <stdio.h>

int main(){
    int x, z, soma=0, i=0;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if(z>x){
            break;
        }
    }
    while(soma<z){
        soma+=i+x;
        i++;
    }
    printf("%d\n", i);

    return 0;
}