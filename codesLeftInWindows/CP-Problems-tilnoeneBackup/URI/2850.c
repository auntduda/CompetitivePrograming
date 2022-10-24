#include <stdio.h>
#include <string.h>

int main() {
    char pal[64];
    while(scanf("%[^\n]s", pal)!=EOF){
        scanf("%*[^\n]"); scanf("%*c");
        if(strcmp(pal, "esquerda")==0) printf("ingles\n");
        else if(strcmp(pal, "direita")==0) printf("frances\n");
        else if(strcmp(pal, "nenhuma")==0) printf("portugues\n");
        else printf("caiu\n");
    }

    return 0;
}
