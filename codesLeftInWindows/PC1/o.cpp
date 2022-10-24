#include<bits/stdc++.h>

using namespace std;

int c=0;
map<int, int> mapa;

int busca(vector<int> s, vector<int> passei, int prox){
    if(passei[prox]==0){
        c++;
        return c; //achei solicitacao
    }
    else if(passei[prox]==1){
        return c; //nao achei solicitacao nunca;
    }

    passei[prox] = 1;
    c++;
    //printf("prox eh: %d\n", prox);

    prox = mapa[prox];

    /*for(int i=1; i<s.size(); i++){
        //printf("%d ", s[i]);
        if(s[i]==prox){
            prox=i;

            break;
        }
    }*/

    //printf("prox eh %d\n", prox);

    return busca(s, passei, prox); //so pro caso de dar errado
}

int main(){
    int n;

    scanf("%d", &n);

    vector<int> flag(n+1, -1);
    vector<int> sup (n+1, 0);

    for(int i=1; i<=n; i++){
        scanf("%d", &sup[i]);

        mapa[sup[i]] = i;

        if(sup[i]==i){
            flag[i]=0;
        }
    }

    printf("%d\n", busca(sup, flag, 1));

    return 0;
}