#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sub[n], res=1, i;
    for(i=0;i<n;i++) scanf("%d", &sub[i]);
    
    if(sub[0]>sub[1]){
        for(i=0;i<n-1;i++){
            if(i%2==0){
                if(sub[i]<=sub[i+1]) res=0;
            } else{
                if(sub[i]>=sub[i+1]) res=0;
            }
        }
    } else if(sub[0]<sub[1]){
        for(i=0;i<n-1;i++){
            if(i%2==0){
                if(sub[i]>=sub[i+1]) res=0;
            }else{
                if(sub[i]<=sub[i+1]) res=0;
            }
        }
    } else res=0;
    
    printf("%d\n", res);
    
    return 0;
}