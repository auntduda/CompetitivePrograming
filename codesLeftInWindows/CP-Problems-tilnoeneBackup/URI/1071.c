#include <stdio.h>

int main(){
    int x, y, i, temp;
    scanf("%d %d", &x, &y);
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
    int soma=0;
    for(i=x;i<y;i+=2){
        soma+=i;
    }
    printf("%d\n", soma);

    return 0;
}