#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int maior=-15464, ultima, esquerda, direita;

    scanf("%d", &n);

    vector<long long int> corujas (n);
    vector<long long int> buracos (n);

    for(int i=0; i<n; i++){
        scanf("%lld", &corujas[i]);
    }

    ultima = corujas[n-1];

    for(int i=0; i<n; i++){
        scanf("%lld", &buracos[i]);
    }

    sort(buracos.begin(), buracos.end());

    for(int i=0; i<n; i++){
        if(buracos[i]>ultima){
            direita=i;

            break;
        }
    }

    esquerda = direita-1;

    if(abs(ultima-buracos[esquerda])>abs(ultima-buracos[direita])){
        printf("%lld\n", abs(ultima-buracos[direita]));
    }
    else{
        printf("%lld\n", abs(ultima-buracos[esquerda]));
    }

    return 0;
}