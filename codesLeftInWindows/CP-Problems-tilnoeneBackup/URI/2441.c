#include <stdio.h>

int main(){
    int a, b, c, temp, tot, fima, fimb, fimc;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    
    tot = 0;

    fima = a+200;
    fimb = b+200;
    fimc = c+200;
    
    if(fima < b){
        tot += b - fima;
    }
    
    if(fimb < c){
        tot += c - fimb;
    }
    tot += a + 600 - fimc;
    
    printf("%d\n", tot*100);
    
    return 0;
}