#include <stdio.h>

int main(){
    int v[17], a, b, i;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
        printf("final\n");
    } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
        printf("oitavas\n");
    } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
        printf("semifinal\n");
    } else{
        printf("quartas\n");
    }
    
    return 0;
}