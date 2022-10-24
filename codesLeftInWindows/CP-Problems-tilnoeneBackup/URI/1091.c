#include <stdio.h>

int main() {
    int n, x, y, cx, cy, i;
    while(1){
        scanf("%d", &n);
        if(n==0) break;
        scanf("%d %d", &cx, &cy);
        for(i=0;i<n;i++){
            scanf("%d %d", &x, &y);
            if(x==cx || y==cy) printf("divisa\n");
            else if(x>cx){
                if(y>cy) printf("NE\n");
                else printf("SE\n");
            } else{
                if(y>cy) printf("NO\n");
                else printf("SO\n");
            }
        }
    }
    
    return 0;
}