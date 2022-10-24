#include <stdio.h>

using namespace std;

void tracos(){
    int i;
    for(i=0;i<39;i++) printf("-");
    printf("\n");
}

int main() {
    int i;
    tracos();
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    tracos();
    for(i=0;i<=15;i++){
        printf("|%7d%4c|%5o%4c|%8X%7c|\n", i, ' ', i, ' ', i, ' ');
 ;
    }
    tracos();
    
    
    return 0;
}