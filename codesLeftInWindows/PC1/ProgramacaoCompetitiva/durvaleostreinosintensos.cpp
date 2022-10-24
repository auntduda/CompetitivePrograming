#include<bits/stdc++.h>

using namespace std;

bool compara(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

bool compara2(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int main(){

    int n, i=1, ans=0, ans2=0;

    scanf("%d", &n);

    vector<pair<int,int>> intervalos;

    for(int i=0; i<n; i++){
        int aux1, aux2;
        scanf("%d %d", &aux1, &aux2);

        intervalos.push_back(make_pair(aux1, aux2));
    }

    sort(intervalos.begin(), intervalos.end(), compara);

    //int maiorFim = intervalos[0].second;
    int maiorComeco = intervalos[0].first;
    ans++;

    while(i!=intervalos.size()){
        //printf("o intervalo analisado eh %d %d\n", intervalos[i].first, intervalos[i].second);
        if(intervalos[i].second<maiorComeco){
            //printf("peguei\n");
            ans++;
            //maiorFim = intervalos[i].second;
            maiorComeco = intervalos[i].first;
        }
        
        i++;
    }

    sort(intervalos.begin(), intervalos.end(), compara2);

    int maiorFim = intervalos[0].second;
    //maiorComeco = intervalos[0].first;
    ans2++;
    i=1;

    while(i!=intervalos.size()){
        if(intervalos[i].first>maiorFim){
            ans2++;
            maiorFim = intervalos[i].second;
            //maiorComeco = intervalos[i].first;
        }

        i++;
    }

    printf("%d\n", max(ans,ans2));
    
    return 0;

}