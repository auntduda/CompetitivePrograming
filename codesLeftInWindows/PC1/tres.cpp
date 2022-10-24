#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, a, b, c;

    scanf("%lld", &n);

    if((n/3)%3==0){
        a = (n/3)+1;
    }
    else{
        a=n/3;
    }
    
    b=a;
    c=n-a-b;

    printf("%lld %lld %lld\n", a, b, c);

    return 0;
}