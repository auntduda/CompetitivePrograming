#include <stdio.h>

int main(){
    int n, l, c, queb = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &l, &c);
        if(l > c) queb += c;
    }
    
    printf("%d\n", queb);
    
    return 0;
}