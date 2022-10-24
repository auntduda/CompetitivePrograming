#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(b >= 0 && b <= 2) printf("nova\n");
    else if(b >= 97 && b <= 100) printf("cheia\n");
    else{
        if(a > b) printf("minguante\n");
        else printf("crescente\n");
    }
    
    return 0;
}