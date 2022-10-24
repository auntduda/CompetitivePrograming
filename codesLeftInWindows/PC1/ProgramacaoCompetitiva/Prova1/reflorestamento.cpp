#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, q;
    
    scanf("%d %d %d", &n, &m, &q);
    
    vector<int> regioes(n+2, 0);
    vector<int> delta(n+2, 0);
    regioes[0] = 0;

    for(int i=1; i<=n; i++){
        scanf("%d", &regioes[i]);
    }

    for(int i=0; i<q; i++){
        int l, r, qtd, especie;
        scanf("%d %d %d %d", &l, &r, &qtd, &especie);

        if(especie<1 || especie>5){
            continue;
        }
        else{
            delta[l] += qtd;
            delta[r+1] -= qtd;
        }
    }

    int atual=0;

    for(int i=1; i<=n; i++){
        atual += delta[i];
    
        if(i==n){
            printf("%d\n", atual+regioes[i]);
        }
        else{
            printf("%d ", atual+regioes[i]);
        }
    }

    return 0;
}