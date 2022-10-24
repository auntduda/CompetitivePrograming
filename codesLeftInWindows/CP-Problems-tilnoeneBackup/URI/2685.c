#include <stdio.h>

int main() {
    double m;
    while(scanf("%lf", &m)!=EOF){
        if(m>=90 && m<180) printf("Boa Tarde!!\n");
        else if(m>=180 && m<270) printf("Boa Noite!!\n");
        else if(m>=270 && m<360) printf("De Madrugada!!\n");
        else printf("Bom Dia!!\n"); 
    }
    
    return 0;
}