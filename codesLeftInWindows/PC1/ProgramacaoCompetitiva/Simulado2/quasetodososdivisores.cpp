#include<bits/stdc++.h>

using namespace std;

int main(){
    int queries;
    vector<int> divisores;

    scanf("%d", &queries);

    for(int i=0; i<queries; i++){
        int div;
        bool flag=true;

        scanf("%d", &div);

        for(int j=0; j<div; j++){
            int aux;
            scanf("%d", &aux);

            divisores.push_back(aux);
        }

        sort(divisores.begin(), divisores.end());

        long long int comp = divisores[0]*divisores[div-1];

        for(int j=1; j<div-1 && flag; j++){
            if(divisores[j]*divisores[div-1-j] != comp){
                flag=false;
            }
        }

        if(flag){
            printf("%d\n", comp);
        }
        else{
            printf("-1\n");
        }
    }

    return 0;
}