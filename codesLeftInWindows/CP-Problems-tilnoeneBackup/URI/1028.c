#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0){
        temp = a % b;

        a = b;
        b = temp;
    }
    
    return a;
}

int main(){
    int n, i, a, b;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    
    return 0;
}