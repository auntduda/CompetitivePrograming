#include<stdio.h>

int main(){

    int i=0, primeiro=0, segundo=1, fibonacci;
    
    printf("%d\n%d\n", primeiro, segundo);

    while(i<15){
        fibonacci = primeiro + segundo;
        printf("%d\n", fibonacci);
        primeiro=segundo;
        segundo=fibonacci;
        i += 1;
    }

    return 0;

}