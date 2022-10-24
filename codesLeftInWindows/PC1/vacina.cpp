#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, l, r, a;
    long long int ans=0;

    scanf("%d %d", &n, &m);

    vector<long long int> p(n+5, 0);
    vector<long long int> delta(n+5, 0);
    vector<long long int> delta_flag(n+5, 0);
    vector<long long int> v_ans(n+5, 0);

    for(int i=1; i<=n; i++){
        scanf("%lld", &p[i]);
    }

    while(m--){
        scanf("%d %d %d", &l, &r, &a);

        delta[l] -= a;
        delta[r+1] += a;

        delta_flag[l]++;
        delta_flag[r+1]--;
    }

    int atual = 0;
    int atual2 = 0;

    for(int i=1; i<=n; i++){
        atual += delta[i];
        p[i] += atual;

        atual2 += delta_flag[i];
        v_ans[i] = atual2;
    }

    for(int i=1; i<=n; i++){
        if(p[i]>0){
            ans+=v_ans[i];
        }
    }

    printf("%lld\n", ans);

    return 0;
}