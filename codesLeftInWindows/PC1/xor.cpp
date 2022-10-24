#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, l, r;
    long long int ans=0;

    scanf("%d %d", &n, &q);

    vector<long long int> a(n+5,0);
    vector<long long int> psum(n+5,0);

    for(int i=1; i<=n; i++){
        scanf("%lld", &a[i]);

        psum[i] = a[i]^psum[i-1];
    }

    while(q--){
        scanf("%d %d", &l, &r);

        ans = psum[r]^psum[l-1];

        printf("%lld\n", ans);
    }

    return 0;
}