#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, l, r, ans=0, tamanho;
    long long int d;

    scanf("%d %lld", &n, &d);

    vector<long long int> x(n+5, 0);

    //printf("entrei\n");
    for(int i=1; i<=n; i++){
        scanf("%lld", &x[i]);
    }

    l=1;
    r=l+2;


    while(r<=n){
        if(r==l){
            r++;
        }
        //printf("ans agora eh %d, l eh %d e r eh %d\n", ans, l, r);
        if(x[r]-x[l]<=d){
            if(r<n){
                r++;
                printf("entrei no r<n\n");
            }
            else{
                tamanho = r-l;
                if(tamanho>=2){
                    ans+=(tamanho*(tamanho-1))/2;
                    l++;
                }

                r++;
                
                printf("entrei no r==n\n");
            }
        }
        else{
            tamanho = r-1-l;
            if(tamanho>=2){
                ans+=(tamanho*(tamanho-1))/2;
                l++;
            }
        }
        //printf("ans agora eh %d, l eh %d e r eh %d\n", ans, l, r);
    }

    printf("%d\n", ans);

    return 0;
}