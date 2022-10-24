#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, pos;
    long long int menor=1e9+9;

    scanf("%d", &n);

    long long int y[n];

    for(int i=0; i<n; i++){
        scanf("%lld", &y[i]);
    }

    for(int i=1; i<n-1; i++){
        if(y[i]<y[i-1] && y[i]<y[i+1]){
            if(y[i]<menor){
                menor=y[i];
                pos=i;
            }
        }
    }

    printf("%d\n", pos+1);

    return 0;
}