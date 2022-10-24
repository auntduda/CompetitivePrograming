#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, repeat=0, found;
    bool flag=true;

    vector<int> lista;

    scanf("%d", &t);

    while(t--){
        int n;

        scanf("%d", &n);

        for(int i=0; i<n; i++){
            int aux;
            scanf("%d", &aux);

            lista.push_back(aux);
        }

        for(int i=1; i<=n && flag; i++){
            if(lista[i] == lista[i-1]){
                repeat=lista[i];
                flag=false;
            }
        }
        
        flag=true;
        
        for(int i=0; i<n && flag; i++){
            if(lista[i] != repeat){
                found=i+1;
                flag=false;
            }
        }
        
        flag=true;
        lista.clear();

        printf("%d\n", found);
    }

    return 0;
}