#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, count=1;

    scanf("%d", &n);

    vector<pair<int,int>> t;
    int posicoes[n];

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);

        t.push_back(make_pair(aux, i));
    }

    sort(t.begin(), t.end());

    posicoes[t[0].second] = count;
    count++;

    for(int i=1; i<n; i++){
        if(t[i-1].first == t[i].first){
            posicoes[t[i].second] = posicoes[t[i-1].second];
        }else{
            posicoes[t[i].second] = count;
        }

        count++;
    }

    for(int i=0; i<n; i++){
        printf("%d ", posicoes[i]);
    }
    
    printf("\n");

    return 0;
}