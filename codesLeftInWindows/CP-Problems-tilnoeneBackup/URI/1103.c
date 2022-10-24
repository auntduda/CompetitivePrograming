#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    while(1){
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1==0 && m1==0 && h2==0 && m2==0) break;
        
        int ti = h1*60+m1, tf = h2*60+m2;
        if(ti>tf) tf+=24*60;
        
        printf("%d\n", tf-ti);
    }
    
    return 0;
}