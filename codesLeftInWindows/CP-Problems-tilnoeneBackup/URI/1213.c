#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n)!=EOF){
        long long int num=1, op=1;
        while(num%n!=0){
            num = (10*num+1)%n;
            op++;
        }
        printf("%d\n", op);
    }
    
    return 0;
}