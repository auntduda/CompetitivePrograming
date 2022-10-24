#include <stdio.h>

int main() {
    int x, y, m;
    while(scanf("%d %d %d", &x, &y, &m)!=EOF){
        int i, a, b;
        for(i=0;i<m;i++){
            scanf("%d %d", &a, &b);
            if((a<=x && b<=y) || (b<=x && a<=y)) printf("Sim\n");
            else printf("Nao\n");
        }
    }
    
    return 0;
}