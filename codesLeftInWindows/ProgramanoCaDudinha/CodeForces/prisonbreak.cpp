#include<bits/stdc++.h>

using namespace std;

int main(){
    int testes;

    scanf("%d", &testes);

    for(int i=0; i<testes; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", (a*b));
    }

    return 0;
}