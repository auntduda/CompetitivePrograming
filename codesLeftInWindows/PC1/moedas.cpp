#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a;

    scanf("%d %d", &n, &a);

    if(n%500 < a){
        printf("Sim\n");
    }
    else{
        printf("Nao\n");
    }

    return 0;
}