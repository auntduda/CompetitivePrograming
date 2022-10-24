#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> tempos;

int pos=0;

bool BB(int x, int tamanho){
    int l=1, r=tamanho;

    int mid = (l+r)/2;

    while(l<=r){
        if(tempos[mid].first < x){
            l=mid+1;
        }
        else if(tempos[mid].first > x){
            r=mid-1;
        }
        else if(tempos[mid].first == x){
            return true;
        }
    }

    return false;
}

int main(){
    int atletas;

    scanf("%d", &atletas);

    for(int i=1; i<atletas+1; i++){
        int aux;
        scanf("%d", &aux);

        tempos.push_back(make_pair(aux, 0));
    }

    sort(tempos.begin(), tempos.end());

    int j=0;
    vector<pair<int, int>> guarda;

    for(int i=1; i<atletas+1; i++){
        guarda.push_back(make_pair(tempos[i].first, tempos[i].second));

        tempos.erase(tempos.begin()+i);

        if(BB(guarda[0].first, atletas+1)){
            tempos.insert(tempos.begin()+i, guarda.begin(), guarda.end());

            tempos[i].second=j;
            tempos[pos].second=j;
            j++;

            guarda.pop_back();
        }
    }

    for(int i=1; i<atletas+1; i++){
        if(i<atletas+1)
            printf("%d ", tempos[i].second);
        if(i==atletas+1)
            printf("%d", tempos[i].second);
    }

    return 0;
}