#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) 
{ 
    return ( *(int*)a - *(int*)b ); 
} 

int main(){
    int n, q, k=1, i, j;
    while(1){
        scanf("%d %d", &n, &q);
        if(n==0 && q==0) break;
        int v[10010], num, pos;
        for(i=0;i<n;i++) scanf("%d", &v[i]);
        
        qsort(v, n, sizeof(int), compare); 
        
        printf("CASE# %d:\n", k);
        for(i=0;i<q;i++){
            pos = -1;
            scanf("%d", &num);
            for(j=0;j<n;j++){
                if(num==v[j]){
                    pos=j+1;
                    break;
                }
            }
            if(pos==-1) printf("%d not found\n", num);
            else printf("%d found at %d\n", num, pos);
        }
        k++;
    }
    
    return 0;
}