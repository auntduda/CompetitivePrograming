#include <stdio.h>

int main(){
    int n;
    
    scanf("%d", &n);
    printf("Top ");
    if(n <= 1) printf("1\n");
    else if(n <= 3) printf("3\n");
    else if(n <= 5) printf("5\n");
    else if(n <= 10) printf("10\n");
    else if(n <= 25) printf("25\n");
    else if(n <= 50) printf("50\n");
    else printf("100\n");
    
    return 0;
}