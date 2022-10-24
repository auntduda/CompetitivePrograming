#include <stdio.h>

int min(int a, int b){
    if(a > b) return b;
    return a;
}

int main() {
    int n;
    char l;
    
    while(scanf("%d", &n) != EOF){
        int i, dir[64] = {}, esq[64] = {}, tam;
        
        for(i = 0; i < n; i++){
            scanf("%d %c", &tam, &l);
            if(l == 'D') dir[tam]++;
            else esq[tam]++;
        }
        
        int pares = 0;
        
        for(i = 30; i <= 60; i++) pares += min(dir[i], esq[i]);

        printf("%d\n", pares);
    }
    
    return 0;
}