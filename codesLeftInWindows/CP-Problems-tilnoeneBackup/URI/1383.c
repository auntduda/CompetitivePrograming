#include <stdio.h>
#define false 0
#define true 1

int main(){
    int n, v, i, j, k;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        printf("Instancia %d\n", i);
        
        int vetor[9][10];
        int lin[9][10];
        int col[9][10];
        int quad[9][10];
        
        int certo = true;
        
        for(j = 0; j < 9; j++){
            for(k = 0; k < 10; k++){
                lin[j][k] = 0;
                col[j][k] = 0;
                quad[j][k] = 0;
            }
        }
        
        for(j = 0; j < 9; j++){
            for(k = 0; k < 9; k++){
                scanf("%d", &v);
                vetor[j][k] = v;

                if(certo){
                    if(lin[j][v] > 0) certo = false;
                    else if(col[k][v] > 0) certo = false;
                    
                    lin[j][v]++;
                    col[k][v]++;
                }
            }
        }
        
        int cq = 0, jt, it;
        for(j = 0; j <= 6; j += 3){
            for(k = 0; k <= 6; k += 3){
                
                for(it = j; it < j+3; it++){
                    for(jt = k; jt < k+3; jt++){
                        
                        int elem = vetor[it][jt];
                        
                        if(certo){
                            if(quad[cq][elem] > 0) certo = false;
                            quad[cq][elem]++;
                        }
                        
                    }
                }
                
                cq++;
                
            }
        }
        
        if(certo) printf("SIM\n");
        else printf("NAO\n");
        printf("\n");
    }
    
    return 0;
}