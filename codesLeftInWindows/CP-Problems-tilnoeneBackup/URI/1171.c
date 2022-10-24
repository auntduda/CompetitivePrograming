#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i, v[2010] = {}, r, dif = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &r);
        v[r]++;
    }
    
    for(i = 0; i <= 2000; i++){
        if(v[i] > 0){
            printf("%d aparece %d vez(es)\n", i, v[i]);
        }
    }
    
    
    
}