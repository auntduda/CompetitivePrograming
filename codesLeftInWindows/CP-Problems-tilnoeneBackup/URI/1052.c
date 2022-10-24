#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char meses[30][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("%s\n", meses[n-1]);
    
    return 0;
}