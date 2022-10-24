#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    int soma=0;
    for(x;x<=y;x++){
        if(x%13!=0){
            soma+=x;
        }
    }
    printf("%d\n", soma);

    return 0;
}