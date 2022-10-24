#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    while(1){
        scanf("%d", &a);
        if(a==0){
            break;
        }
        scanf("%d %d", &b, &c);
        printf("%.0lf\n", floor(sqrt((a*b)*(100.0/c))));
    }
    
    return 0;
}