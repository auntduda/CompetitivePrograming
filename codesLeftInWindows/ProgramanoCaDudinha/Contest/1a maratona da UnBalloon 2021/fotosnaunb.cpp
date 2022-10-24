#include<bits/stdc++.h>

using namespace std;

int main(){

    int pontos, tempo, qtd=0;

    vector<int> lugares;

    scanf("%d %d", &pontos, &tempo);

    for(int i=0; i<pontos; i++){
        int tempos;
        scanf("%d", &tempos);

        lugares.push_back(tempos);
    }

    sort(lugares.begin(), lugares.end());

    for(int i=0; i<pontos && tempo>0; i++){
        if(lugares[i] <= tempo){
            qtd++;
            tempo= tempo-lugares[i];
        }
    }

    printf("%d\n", qtd);

    return 0;

}