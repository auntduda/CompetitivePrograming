#include<bits/stdc++.h>
#include<map>

using namespace std;

int main(){
    int n;

    scanf("%d", &n);

    vector<int> erros;

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);
        erros.push_back(aux);
    }

    vector<int> erros1;
    int count=2;

    while(count--){
        for(int i=0; i<(n-1); i++){
            int aux;
            scanf("%d", &aux);

            erros1.push_back(aux);

            if(erros1.find(erros[i]) == erros.end()){
                printf("%d\n", erros1[i]);
            }
        }
    }

    return 0;
    
}