#include<bits/stdc++.h>

int partido[10] = {0,0,0,0,0,0,0,0,0,0};

using namespace std;

int main(){

    int ano, count=0, tipo;

    scanf("%d", &ano);

    if(ano>=0 && ano<=9){
        tipo=0;
    }
    if(ano>=10 && ano<=99){
        tipo=1;
    }
    if(ano>=100 && ano<=999){
        tipo=2;
    }
    if(ano>=1000 && ano<=9999){
        tipo=3;
    }

    ano++;

    while(1){
        
    }


    return 0;

}