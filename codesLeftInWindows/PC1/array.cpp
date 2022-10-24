#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, l, r, n, last;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        vector<long long int> a(n+1, 0);

        for(int i=1; i<=n; i++){
            scanf("%lld", &a[i]);
        }

        if(is_sorted(a.begin(), a.end()+1)){
            printf("0\n");
            printf("\n");
        }
        else{
            printf("%d\n", n-1);

            r=2;

            while(r!=n+1){
                l=r-1;

                while(a[l]>a[r] && l!=1){
                    l--;
                }

                printf("%d %d 1\n", l , r);

                last = a[r];

                for(int i=l; i<=r; i++){
                    if(i==l){
                        a[i] = last;
                    }
                    else if(a[i]>a[i-1]){
                        continue;
                    }
                    else{
                        a[i] = a[i-1];
                    }
                }

                r++;
            }
        }        
    }

    return 0;
}