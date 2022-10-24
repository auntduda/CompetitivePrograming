#include <stdio.h>

int main(){
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    if(n > a || n > b || n > c) printf("N\n");
    else printf("S\n");
    
    return 0;
}
