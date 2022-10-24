#include<stdio.h>

int main() {
    int i, n, v, menor, pos=1;
    scanf("%d %d", &n, &menor);
    for(i=1;i<n;i++){
        scanf("%d", &v);
        if(v<menor){
            menor = v;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    
    return 0;
}