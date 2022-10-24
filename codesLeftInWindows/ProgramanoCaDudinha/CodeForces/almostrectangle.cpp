#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, k=0, index_star[4];

    scanf("%d", &t);

    while(t--){
        int n;

        char matrix[n][n];

        scanf("%d", &n);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                scanf("%c", &matrix[i][j]);
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == '*'){
                    index_star[k] = i;
                    index_star[k+1] = j;
                    k=k+2;
                }
            }
        }

        int m=0;
        k=0;
        
        if(index_star[k] == index_star[k+2]){
            if(index_star[k]==n-1){
                matrix[index_star[k]-1][index_star[k+1]] = '*';
                matrix[index_star[k+2]-1][index_star[k+3]] = '*';
            }
            else{
                matrix[index_star[k]+1][index_star[k+1]] = '*';
                matrix[index_star[k+2]+1][index_star[k+3]] = '*';
            }
        }
            
        if(index_star[k+1] == index_star[k+3]){
            if(index_star[k+1]==n-1){
                matrix[index_star[k]][index_star[k+1]-1] = '*';
                matrix[index_star[k+2]][index_star[k+3]-1] = '*';
            }
            else{
                matrix[index_star[k]][index_star[k+1]+1] = '*';
                matrix[index_star[k+2]][index_star[k+3]+1] = '*';
            }
        }

        if((index_star[k] != index_star[k+2]) || (index_star[k+1] != index_star[k+3])){
            matrix[index_star[k]][index_star[k+3]] = '*';
            matrix[index_star[k+2]][index_star[k+1]] = '*';
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==n-1){
                    printf("%c\n", matrix[i][j]);
                }
                else{
                    printf("%c", matrix[i][j]);
                }
            }
        }
    }

    return 0;
}