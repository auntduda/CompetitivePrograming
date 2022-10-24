#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char d[110], s[110];
    
    while(scanf("%s %s", d, s) != EOF){
        
        if(strstr(d, s)) printf("Resistente\n");
        else printf("Nao resistente\n");
    }
    
    return 0;
}