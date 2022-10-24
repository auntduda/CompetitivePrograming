#include <stdio.h>

using namespace std;

int main(){
    int n;
    while(true){
        scanf("%d", &n);
        if(n==0){
            break;
        }
        int matriz[n][n];
        int k=0;
        for(int i=1;i<=n;i++){
            //for descrescente
            int l=0;
            for(int j=k+1;j>1;j--){
                /*if(j==k+1){
                    printf(" %2d", j);
                } else{
                    printf(" %3d", j);
                }*/
                matriz[i-1][l]=j;
                l++;
            }
            //for crescente
            for(int j=1;j<=n-k;j++){
                /*if(j==1 and i==1){
                    printf(" %2d", j);
                } else if(j==n-k){
                    printf(" %3d\n", j);
                } else{
                    printf(" %3d", j);
                }*/
                matriz[i-1][l]=j;
                l++;
            }
            k++;
        }

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j==0){
					printf("%3hd", matriz[i][j]);
                }else{
					printf(" %3hd", matriz[i][j]);
                }
			}
			printf("\n");
		}
        printf("\n");
    }
    return 0;
}