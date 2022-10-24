#include<stdio.h>

int main(){

    int cases, a, b, cont=0;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d", &a, &b);

        cont=0;

        while(1){
            if(a%b > b){
                b++;
                cont++;
            }
            else{
                if(!a)
                    break;
                
                a=(a/b);
                cont++;
            }
        }
        
        printf("%d\n", cont);
    }

    return 0;

}