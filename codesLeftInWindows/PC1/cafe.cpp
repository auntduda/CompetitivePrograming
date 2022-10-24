#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, t, l, r, x, ans=0;

    scanf("%d %d %d", &n, &q, &t);

    vector<long long int> delta(n+5, 0);
    vector<long long int> lotes(n+5, 0);

    

    while(q--){
        scanf("%d %d %d", &l, &r, &x);

        delta[l] += x;
        delta[r+1] -= x;
    }

    int atual = 0;

    for(int i=1; i<=n; i++){
        atual += delta[i];
        lotes[i] = atual;

        if(atual>=t){
            ans++;
        }
    }

    printf("%d\n", ans);
}