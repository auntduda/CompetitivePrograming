#include <stdio.h>
#include <string.h>

int main(){
    char a[128], b[128], c[128];
    scanf("%s %s %s", a, b, c);

    if(strcmp(a, "vertebrado")==0){
        if(strcmp(b, "ave")==0){
            if(strcmp(c, "carnivoro")==0){
                puts("aguia");
            } else{
                puts("pomba");
            }
        } else{
            if(strcmp(c, "onivoro")==0){
                puts("homem");
            } else{
                puts("vaca");
            }
        }
    } else{
        if(strcmp(b, "inseto")==0){
            if(strcmp(c, "hematofago")==0){
                puts("pulga");
            } else{
                puts("lagarta");
            }
        } else{
            if(strcmp(c, "hematofago")==0){
                puts("sanguessuga");
            } else{
                puts("minhoca");
            }
        }
    }
    
    return 0;
}