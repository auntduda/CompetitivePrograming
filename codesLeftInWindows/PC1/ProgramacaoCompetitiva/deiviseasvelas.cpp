#include<bits/stdc++.h>

using namespace std;

int main(){

    int velas, formacao, acesas=0, sobras=0;

    scanf("%d %d", &velas, &formacao);

    acesas+=velas;

    while(velas!=0){
        sobras=0;

        acesas+=(velas/formacao);

        sobras=velas%formacao;

        if(velas/formacao == 0){
            break;
        }

        velas=(velas/formacao)+sobras;
    }

    printf("%d\n", acesas);

    return 0;
}