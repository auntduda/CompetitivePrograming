#include<stdio.h>

int main() {
    int i, k=0, v;
    scanf("%d", &v);
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n", i, k);
        if(k==v-1){
            k=0;
        } else{
            k++;
        }
    }
    return 0;
}