#include <stdio.h>

int main(){
    int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
        
        if(rx >= dx && rx <= cx && ry >= ay && ry <= dy) printf("1\n");
        else printf("0\n");
        
    }
    
    return 0;
}