#include <stdio.h>

void tracos(){
    int i;
    for(i=0;i<39;i++){
        printf("-");
    }
    printf("\n");
}

int main() {
    tracos();
    int i;
    
    printf("|");
    printf("%-37s", "x = 35");
    printf("|\n");
    
    printf("|");
    for(i=0;i<37;i++) printf(" ");
    printf("|\n");
    
    printf("|");
    for(i=0;i<15;i++) printf(" ");
    printf("%-22s", "x = 35");
    printf("|\n");
    
    printf("|");
    for(i=0;i<37;i++) printf(" ");
    printf("|\n");
    
    printf("|");
    printf("%37s", "x = 35");
    printf("|\n");
    
    tracos();

    return 0;
}