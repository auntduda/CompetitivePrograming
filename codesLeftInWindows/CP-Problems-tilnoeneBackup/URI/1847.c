#include <stdio.h>
#define true 1
#define false 0

int main() {
    int a, b, c;
    scanf("%d %d %d", &a , &b, &c);
    int feliz=false;
    
    if(a>b && b<=c) feliz=true;
    else if(b>a && c>b && c-b>=b-a) feliz=true;
    else if(a>b && b>c && b-c<a-b) feliz=true;
    else if(a==b && c>b) feliz=true;
    
    if(feliz) printf(":)\n");
    else printf(":(\n");
    
    return 0;
}