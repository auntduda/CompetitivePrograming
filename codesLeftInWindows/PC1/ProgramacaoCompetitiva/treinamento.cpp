#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int competicoes, dia=1, streak=0;
    vector<int> questoes;

    scanf("%d", &competicoes);

    for(int i=0; i<competicoes; i++){
        int aux;

        scanf("%d", &aux);

        questoes.push_back(aux);
    }

    sort(questoes.begin(), questoes.end());

    for(int i=0; i<questoes.size(); i++){
        if(questoes[i]>=dia){
            streak++;
            dia++;
        }
    }

    printf("%d\n", streak);

    return 0;
}