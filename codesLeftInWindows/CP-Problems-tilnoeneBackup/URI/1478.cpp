#include <stdio.h>

using namespace std;

int main(){
    int n;
    while(true){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        int k=0;
        for(int i=1;i<=n;i++){
            //for descrescente
            for(int j=k+1;j>1;j--){
                if(j==k+1){
                    printf(" %2d", j);
                } else{
                    printf(" %3d", j);
                }
            }
            //for crescente
            for(int j=1;j<=n-k;j++){
                if(j==1 and i==1){
                    printf(" %2d", j);
                } else if(j==n-k){
                    printf(" %3d\n", j);
                } else{
                    printf(" %3d", j);
                }
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}