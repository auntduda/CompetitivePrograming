#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    long long int alice=0, bob=0;

    scanf("%d", &n);

    vector<int> cartas;

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);

        cartas.push_back(aux);
    }

    sort(cartas.begin(), cartas.end());

    for(int i=n-1; i>=0; i=i-2){
        alice+=cartas[i];
    }

    for(int i=n-2; i>=0; i=i-2){
        bob+=cartas[i];
    }

    long long int dif = abs(alice - bob);

    printf("%lld\n", dif);

    return 0;
}