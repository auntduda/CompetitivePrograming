#include <stdio.h>

int main(){
    int n, v, i, j;
    scanf("%d", &n);
    for(j=0;j<n;j++){
        scanf("%d", &v);
        int div=0;
        if(v==2){
            printf("%d eh primo\n", v);
        } else if(v==1){
            printf("%d nao eh primo\n", v);
        } else if(v%2==0){
            printf("%d nao eh primo\n", v);
        } else{
            for(i=3;i<v;i+=2){
                if(v%i==0){
                    div=1;
                    break;
                }
            }
            if(div==0){
                printf("%d eh primo\n", v);
            } else{
                printf("%d nao eh primo\n", v);
            }
        }
    }

    return 0;
}