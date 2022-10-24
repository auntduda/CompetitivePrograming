#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, l, r, x;

    scanf("%d %d", &n, &q);

    vector<long long int> a (n+5, 0);
    vector<long long int> delta (n+5, 0);

    while(q--){
        scanf("%d %d %d", &l, &r, &x);

        delta[l]+=x;
        delta[r+1]-=x;
    }

    long long int atual = 0;

    for(int i=1; i<=n; i++){
        atual += delta[i];
        a[i] = atual;
    }

    for(int i=1; i<=n; i++){
        printf("%lld ", a[i]);
    }

    printf("\n");

    return 0;
}