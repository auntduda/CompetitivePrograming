#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, q, l, r;

    scanf("%d %d", &n, &q);

    vector<int> a(n+5,0);
    vector<long long int> psum (n+5,0);

    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);

        psum[i] = psum[i-1] + a[i];
    }

    while(q--){
        scanf("%d %d", &l, &r);

        printf("%lld\n", psum[r]-psum[l-1]);
    }

    return 0;
}