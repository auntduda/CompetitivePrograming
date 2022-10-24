#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;

    scanf("%d %d", &n, &k);

    vector<pair<int,int>> blocos;

    for(int i=0; i<n; i++){
        int aux1, aux2;
        scanf("%d %d", &aux1, &aux2);

        blocos.push_back(make_pair(aux1, aux2));
    }

    vector<pair<int,int>> blocosCopia = blocos;

    sort(blocosCopia.begin(), blocosCopia.end());

    for(int i=0; i<n; i++){
        if(blocos[i].second!=blocosCopia[i].second){
            printf("N\n");

            return 0;
        }
    }

    printf("Y\n");

    return 0;
}