#include <stdio.h>

int main(){
    int i;
    for(i=0;i<39;i++){
        printf("-");
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("|");
        int j;
        for(j=0;j<37;j++){
            printf(" ");
        }
        printf("|\n");
    }
    
    for(i=0;i<39;i++){
        printf("-");
    }
    printf("\n");
    return 0;
}