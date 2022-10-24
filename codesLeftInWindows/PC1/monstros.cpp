#include<bits/stdc++.h>

using namespace std;

int main(){
    int l, r, x, y; 
    double k;

    scanf("%d %d %d %d %lf", &l, &r, &x, &y, &k);

    for(int i=x; i<=y; i++){ //k=a/b => a = b*k
        if((k*i)>=l && (k*i)<=r){
            printf("YES\n");

            return 0;
        }
    }

    printf("NO\n");

    return 0;
}