#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, l, r, count=0, troca=0, ans=0;

    scanf("%d %d", &n, &q);

    vector<long long int> v(n+5,0);
    vector<pair<int,int>> pares;
    vector<int> histograma(n+5, 0);
    vector<long long int> psum(n+5, 0);

    for(int i=1; i<=n; i++){
        scanf("%lld", &v[i]);
    }

    while(count!=q){
        scanf("%d %d", &l, &r);

        pares.push_back(make_pair(l,r));

        histograma[l]++;
        histograma[r]++;

        count++;
    }

    int maior = 0;

    for(int i=1; i<=q; i++){
        if(histograma[i]>maior){
            maior = i;
        }
    }

    for(int i=1; i<=n; i++){
        if(v[i]==n){
            troca=i;
        }
    }

    long long int aux = v[maior];
    v[maior] = v[troca];
    v[troca] = aux;

    for(int i=1; i<=n; i++){
        psum[i] = v[i] + psum[i-1];
    }

    count=0;

    while(count!=q){
        ans+=psum[pares[count].second]-psum[pares[count].first-1];

        count++;
    }

    printf("%d\n", ans);

    return 0;
}