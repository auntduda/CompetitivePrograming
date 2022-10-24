#include <stdio.h>
#include <stdlib.h>

int main() {
    char n[128];
    scanf("%s", n);
    double x = strtod(n, '\0');
    if(x>=0 && n[0]!='-') printf("+");
    printf("%.4E\n", x);
    
    return 0;
}