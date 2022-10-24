//2783 - Figurinhas da Copa 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, c, m, faltam=0;

    scanf("%d %d %d", &n, &c, &m);

    int carimbadas[c+2];
    int comprada[m+2];

    for(int i=0; i<c; i++){
        scanf("%d", &carimbadas[i]);
    }

    for(int i=0; i<m; i++){
        scanf("%d", &comprada[i]);

        for(int j=0; j<c; j++){
            if(comprada[i]==carimbadas[j]){
                carimbadas[j]=-1;
                faltam++;
                break;
            }
        }
    }

    if(c-faltam<0){
        printf("0\n");

        return 0;
    }
    else{
        printf("%d\n", c-faltam);

        return 0;
    }
}