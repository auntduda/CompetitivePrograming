#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;

    long long int soma=0;

    scanf("%lld", &n);

    vector<long long int> divisores;

    for(long long int i=1; i*i<=n; i++){
        if(n%i==0){
            divisores.push_back(i);
            long long int j=n/i;
            if(j!=i || j!=n){
                divisores.push_back(j);
            }
        }
    }

    sort(divisores.begin(), divisores.end());

    for(long long int i=1; i<divisores.size(); i++){
        soma+=i;
    }

    if(soma == n){
        printf("1\n");
        return 0;
    }
    else{
        printf("0\n");
        return 0;
    }
}