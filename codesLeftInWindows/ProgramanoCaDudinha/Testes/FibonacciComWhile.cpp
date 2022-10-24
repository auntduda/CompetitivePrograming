#include<stdio.h>

using namespace std;

int main(){

    int i=0, primeiro=0, segundo=1, fibonacci;

    while(i<15){
        fibonacci = primeiro + segundo;
        printf("%d\n", fibonacci);
        fibonacci=segundo;
        segundo=primeiro;
    }

    return 0;

}