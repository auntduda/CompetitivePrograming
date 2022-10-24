#include<bits/stdc++.h>

using namespace std;

int main(){
    int ans=0, n, m;

    scanf("%d %d", &n, &m);

    for(int i=0; i<32; i++){
        for(int j=0; j<32; j++){
            int chuteN = (i*i)+j;
            int chuteM = i+(j*j);

            int nAnterior = ((i-1)*(i-1))+(j-1);
            int mAnterior = (i-1)+((j-1)*(j-1));

            if(chuteN==n && chuteM==m){
                ans++;
            }else{
                if(nAnterior<n && chuteN>n){
                    if(mAnterior<m && chuteM>m){
                        ans++;
                    }
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}