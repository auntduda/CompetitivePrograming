#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, k, q, l, r, atual;
    
    vector<long long int> sites(200002,0);
    vector<long long int> delta(200002,0);
    vector<long long int> aceitavel(200002,0);
    
    scanf("%d %d %d",&n,&k,&q);

    for(int i = 0; i < n; i++){
        scanf("%d %d",&l,&r);
        delta[l]++;
        delta[r+1]--;
    }
    
    atual = 0;

    for(int i = 1; i < 200002; i++){
        atual = atual + delta[i];
        sites[i] = atual;
    }
    
    aceitavel[0] = sites[0];

    for(int i = 1; i < 200002; i++){
        if(sites[i] >= k) 
            aceitavel[i] = aceitavel[i-1]+1;
        else
            aceitavel[i] = aceitavel[i-1];
    }
    
    
    for(int qq = 1; qq <= q; qq++){
        scanf("%d %d",&l,&r);
        printf("%lld\n",aceitavel[r]-aceitavel[l-1]);
    }
    
    return 0;
}