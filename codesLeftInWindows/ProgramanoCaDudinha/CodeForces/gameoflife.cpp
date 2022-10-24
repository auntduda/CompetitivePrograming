#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    scanf("%d", &t);

    while(t--){
        int n, m, cont=0;
        scanf("%d %d", &n, &m);
        vector<int> cells(n);
        for(int i=0; i<n; i++){
            int aux;
            scanf("%d", &aux);
            cells[i] = aux;
            if(aux == 0){
                cont++;
            }
        }

        while(m--){
            
        }
    }
}