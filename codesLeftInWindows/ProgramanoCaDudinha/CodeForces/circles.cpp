#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;

    long long int a, b, c, dist, tamanho;

    scanf("%d", &t);

    while(t--){
        scanf("%lld %lld %lld", &a, &b, &c);

        if(a>b && a>c){
            tamanho=a;
        }
        else if(b>c && b>a){
            tamanho=b;
        }
        else{
            tamanho=c;
        }

        if(tamanho%2!=0){
            tamanho++;
        }

        dist = abs(a-b);
        
        if(dist<tamanho/2){
            printf("-1\n");
        }
        else{
            printf("%lld\n", c+dist);
        }
    }

    return 0;
}