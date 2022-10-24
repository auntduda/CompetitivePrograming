#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, m, num;
    
    scanf("%d %d", &n, &m);
    
    int* casas = (int*) malloc(1000000010 * sizeof(int));
    
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        
        casas[num] = i;
    }
    
    long long ans = 0, atual = 1;
    while(m--){
        scanf("%d", &num);

        ans += abs(atual - casas[num]);
        atual = casas[num];
    }
    
    printf("%d\n", ans);
    
    return 0;
}