#include <stdio.h>

int abs(int n){
    if(n < 0) return n * (-1);
    return n;
}

int main(){
    while(1){
        int i, j, m, pos=1, mov=0, linha, menor, posd;
        scanf("%d", &m);
        if(m==0) break;
        for(i=0;i<m;i++){
            menor = 3;
            for(j=0;j<3;j++){
                scanf("%d", &linha);
                if(linha==0 && abs(j-pos)<menor){
                    menor = abs(j-pos);
                    posd = j;
                }
            }
            pos = posd;
            mov+=menor;
        }
        printf("%d\n", mov);
    }
 
    return 0;
}