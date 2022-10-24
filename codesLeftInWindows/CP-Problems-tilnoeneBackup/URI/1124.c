#include <stdio.h>

int main(){
    
    int l, c, ra, rb, xa, ya, xb, yb, cxa, cya, cxb, cyb;
    
    while(1){
        
        scanf("%d %d %d %d", &l, &c, &ra, &rb);
        
        if(l == 0 && c == 0 && ra == 0 && rb == 0) break;

        cxa = ra;
        cya = c-ra;
        
        cxb = l-rb;
        cyb = rb;
        
        if(ra*2 <= l && ra*2 <= c && rb*2 <= l && rb*2 <= c){
            if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)) printf("S\n");
            else printf("N\n");
        } else printf("N\n");
        
    }
    
}