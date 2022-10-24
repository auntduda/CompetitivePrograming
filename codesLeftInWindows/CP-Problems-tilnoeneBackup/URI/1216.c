#include <stdio.h>

int main(){
    char nome[100010];
    int it = 0, v;
    double total = 0;
    
    while(scanf("%[^\n]", nome) != EOF){
        scanf("%d", &v);

        total += v;
        it++;    
    }
    
    printf("%.1lf\n", total/it);
    
    return 0;
}