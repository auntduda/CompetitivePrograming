#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, l, r;
    long long int t, ans=0, qtd;

    scanf("%d %lld", &n, &t);

    vector<int> a(n+5, 0);
    vector<long long int> psum(n+5, 0);

    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=1; i<=n; i++){
        psum[i] = a[i] + psum[i-1];
    }

    l=1;
    r=1;

    while(l<=n && r<=n){
        if(psum[r]-psum[l-1]<=t){
            qtd = r-l+1;
            ans = max(qtd, ans);
            r++;
        }
        else{
            l++;
        }
    }

    printf("%d\n", ans);

    return 0;
}