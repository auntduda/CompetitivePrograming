#include<stdio.h>

int main(){

    int quilo;


    scanf("%d", &quilo);

    if(quilo%2 == 0 && quilo != 2){
        printf("YES\n");

        return 0;
    }

    else{
        printf("NO\n");

        return 0;
    }

}