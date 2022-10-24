#include <stdio.h>
#include <string.h>

int main() {
    char str[1024];
    scanf("%[^\n]", str);
    
    if(strlen(str) <= 80){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    
    return 0;
}