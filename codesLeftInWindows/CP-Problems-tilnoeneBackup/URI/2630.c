#include <stdio.h>
#include <string.h>

int main(){
    int r, g, b, n, i, res;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        char e[32];
        scanf("%s", e);
        scanf("%d %d %d", &r, &g, &b);
        
        if(strcmp(e, "min")==0){
            if(r<g){
                if(r<b){
                    res = r;
                } else{
                    res = b;
                }
            } else{
                if(g<b){
                    res = g;
                } else{
                    res = b;
                }
            }
        } else if(strcmp(e, "mean")==0){
            res = ((r+g+b)/3.0);
        } else if(strcmp(e, "max")==0){
            if(r>g){
                if(r>b){
                    res = r;
                } else{
                    res = b;
                }
            } else{
                if(g>b){
                    res = g;
                } else{
                    res = b;
                }
            }
        } else{
            res = ((0.3*r)+(0.59*g)+(0.11*b));
        }
        printf("Caso #%d: %d\n", i+1, res);
    }
    
    return 0;
}
