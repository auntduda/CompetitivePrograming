#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, ricardo, mauro, h, ans=1e9;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    for(int i=0; i<=100; i++){  // b+i*a = d+j*c = y
        for(int j=0; j<=100; j++){
            ricardo = b+(i*a);
            mauro = d+(j*c);

            if(ricardo==mauro){
                ans=min(ans,ricardo);
            }
        }
    }

    if(ans==1e9){
        printf("-1\n");
    }
    else{
        printf("%d\n", ans);
    }

    return 0;
}