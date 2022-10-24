#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int>> tempos;

int BB(int x, int tamanho){
    int l=0, r=tamanho, mid;

    while(l<=r){
        mid=(l+r)/2;

        if(tempos[mid].first > x){
            r=mid-1;
        }
        else if(tempos[mid].first < x){
            l=mid+1;
        }
        else if(tempos[mid].first == x){
            return mid;
        }
    }

    return -1;
}

int main(){
    int atletas;

    scanf("%d", &atletas);


    for(int i=0; i<atletas; i++){
        int aux;
        scanf("%d", &aux);

        tempos.push_back(make_pair(aux, 0));
    }

    tempos.push_back(make_pair(-1,-1));

    vector<pair<int, int>> comp = tempos;

    sort(tempos.begin(), tempos.end());

    int j=2;
    tempos[0].second = 1;

    for(int i=1; i<=atletas; i++){
        if(tempos[i].first == tempos[i-1].first){
            tempos[i].second = tempos[i-1].second;

            j++;
        }
        else{
            tempos[i].second = j;
            j++;
        }
    }

    for(int i=0; i<atletas; i++){
        if(i==atletas)
            printf("%d\n", BB(comp[i].first, atletas));
        else
            printf("%d ", BB(comp[i].first, atletas));
    }

    return 0;
}