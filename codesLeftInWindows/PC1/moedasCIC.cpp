#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, c1, c2;
    long long int n;

    scanf("%d", &t);

    while(t--){
        scanf("%lld", &n);

        if(n%3==0){
            c1 = n/3;
            c2=c1;
        }
        else if(n%3==1){
            c2 = n/3;
            c1 = n - (2*c2);
        }
        else{
            c2 = (n/3)+1;
            c1 = n- (2*c2);
        }

        printf("%d %d\n", c1, c2);
    }

    return 0;
}