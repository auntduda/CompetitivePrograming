#include <stdio.h>

int main(){
    int n, m, ter[1024][1024];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &ter[i][j]);
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(ter[i][j]==42 && ter[i-1][j-1]==7 && ter[i-1][j]==7 && ter[i-1][j+1]==7 && ter[i][j-1]==7 && ter[i][j+1]==7 && ter[i+1][j-1]==7 && ter[i+1][j]==7 && ter[i+1][j+1]==7){
                printf("%d %d\n", i+1, j+1);
                return 0;
            }
        }
    }
    printf("0 0\n");

    return 0;
}