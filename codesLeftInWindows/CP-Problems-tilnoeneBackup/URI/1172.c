#include <stdio.h>

int main(){
    int i, v;
    for(i=0;i<10;i++){
        scanf("%d", &v);
        if(v<=0){
            v=1;
        }
        printf("X[%d] = %d\n", i, v);
    }

    return 0;
}