#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, p, l, r, maior=0, ans=0;

    scanf("%lld %lld", &n, &p);

    vector<int> a (n+5, 0);
    vector<long long int> psum (n+5, 0);

    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);

        psum[i] = a[i] + psum[i-1];
    }

    l=1;
    r=1;

    while(l!=n+1 && r!=n+1){
        //resultado = psum[r]-psum[l-1];

        //printf("variavel resultado eh: %lld\nl = %lld\nr = %lld\n", resultado, l,r);

        if(psum[r]-psum[l-1]>p){
            l++;
        }
        else if(psum[r]-psum[l-1]<=p){
            maior=r-l+1;
            
            if(maior>ans){
                ans=maior;
            }
            
            r++;
        }
    }

    printf("%lld\n", ans);

    return 0;
}