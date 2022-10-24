#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, pares=0;
    long long int xore;

    scanf("%d", &n);

    set<long long int> x;
    set<long long int> y;

    for(int i=0; i<n; i++){
        long long int aux;
        scanf("%lld", &aux);

        x.insert(aux);
    }

    for(int i=0; i<n; i++){
        long long int aux;
        scanf("%lld", &aux);

        y.insert(aux);
    }

    for(auto i = x.begin(); i!=x.end(); i++){
        for(auto j = y.begin(); j!=y.end(); j++){
            xore = (*i)^(*j);

            if(x.count(xore)>0 || y.count(xore)>0){
                pares++;
            }
        }
    }

    if(pares%2==0){
        printf("Karen\n");
    }
    else{
        printf("Koyomi\n");
    }

    return 0;
}