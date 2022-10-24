#include <stdio.h>

int main(){
    int i, v, ant;
    scanf("%d", &v);
    for(i=0;i<10;i++){
        if(i==0){
            ant = v;
        } else{
            ant = ant*2;
        }
        printf("N[%d] = %d\n", i, ant);
    }

    return 0;
}