#include<bits/stdc++.h>

using namespace std;

char matriz[10][10];

int main(){

    int lin, col, i, j, lado, altura, fim=0, inicio=0;

    vector<int> vetor;

    bool flag=true;

    scanf("%d %d ", &lin, &col);

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            matriz[i][j] = 4;
        }
    }

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            scanf("%c", &matriz[i][j]);
        }
        getchar();
    }

    for(i=0; i<lin && flag; i++){
        for(j=0; j<col && flag; j++){
            if(flag && matriz[i][j] == 49){
                inicio = i;
                flag = false;
            }
        }
    }

    flag=true;

    for(i=lin-1; i>=0 && flag; i--){
        for(j=col-1; j>=0 && flag; j--){
            if(flag && matriz[i][j] == 49){
                fim = i;
                flag = false;
            }
        }
    }

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if(matriz[i][j] == 49){
                vetor.push_back(j);
            }
        }
    }

    sort(vetor.begin(), vetor.end());

    if(!vetor.empty())
        lado = (*(vetor.end()-1) - *vetor.begin());
    else
        lado=0;

    altura = (fim - inicio);

    if(!flag){
        altura++;
        lado++;
    }

    printf("%dx%d\n", lado, altura);

    return 0;    

}