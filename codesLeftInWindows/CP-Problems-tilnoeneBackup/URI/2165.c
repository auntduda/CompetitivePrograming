#include <string.h>
#include <stdio.h>

int main(){
    char a[5000];
    scanf("%[^\n]", a);
    
    if(strlen(a) > 140) printf("MUTE\n");
    else printf("TWEET\n");
    
    return 0;
}