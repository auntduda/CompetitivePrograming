#include <stdio.h>

int main(){
    int n, x, y, si, temp, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        si=0;
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }

        if(x%2==0){
            x++;
        } else{
            x+=2;
        }
        for(j=x;j<y;j+=2){
            si+=j;
        }
        printf("%d\n", si);
    }

    return 0;
}