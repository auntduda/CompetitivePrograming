#include <stdio.h>

int main(){
    
    int ta, tb, v = 1;
    scanf("%d %d", &ta, &tb);
    
    int a = ta, b = tb, ori = b;
    while(b - a < ori){
        b += tb;
        a += ta;
        v++;
    }
    
    printf("%d\n", v);
    
    return 0;
}