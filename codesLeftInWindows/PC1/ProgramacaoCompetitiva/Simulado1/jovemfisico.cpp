#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, soma_x=0, soma_y=0, soma_z=0;

    scanf("%d", &n);

    int vet[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &vet[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            if(j==0){
                soma_x += vet[i][0];
            }
            if(j==1){
                soma_y += vet[i][1];
            }
            if(j==2){
                soma_z += vet[i][2];
            }
        }
    }

    if(!soma_x && !soma_y && !soma_z){
        printf("YES\n");

        return 0;
    }
    else{
        printf("NO\n");
        return 0;
    }

}