#include<bits/stdc++.h>

using namespace std;

vector<int> c;
vector<int> q;
int ans=0;
int n, x;
long long int l, r;

void busca(vector<int> questoes, int i){
    if(questoes.size()>0 && i==n){
        long long int soma = accumulate(questoes.begin(), questoes.end(), 0);
        sort(questoes.begin(), questoes.end());
        int menor = questoes[0];
        int maior = questoes[questoes.size()-1];

        if(questoes.size()>=2 && soma>=l && soma<=r && abs(maior-menor)>=x){
            ans++;
        }
    }

    if(i==c.size()){
        return;
    }

    busca(questoes, i+1);

    questoes.push_back(c[i]);
    busca(questoes, i+1);
}

int main(){

    scanf("%d %lld %lld %d", &n, &l, &r, &x);

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);
    
        c.push_back(aux);
    }

    busca(q, 0);

    printf("%d\n", ans);

    return 0;
}