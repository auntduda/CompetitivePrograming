#include <stdio.h>

using namespace std;

int main() {
    double m;
    while(scanf("%lf", &m)!=EOF){
        if(m>=90 && m<180) printf("Boa Tarde!!\n");
        else if(m>=180 && m<270) printf("Boa Noite!!\n");
        else if(m>=270 && m<360) printf("De Madrugada!!\n");
        else printf("Bom Dia!!\n");
        
        int total = 240*m+21600;
        int h = total/3600;
        int m = (total%3600)/60;
        int s = (total%3600)%60;
        printf("%02d:%02d:%02d\n", h, m, s);
        
    }
    
    return 0;
}