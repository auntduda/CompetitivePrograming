#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, max=-754, ans=0;

    scanf("%d", &n);

    int p[n];

    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);

        if(p[i] > max){
            max=p[i];
        }
    }

    for(int i=0; i<n; i++){
        if(p[i]<max){
            ans+=max-p[i];
        }
    }

    printf("%d\n", ans);

    return 0;

}