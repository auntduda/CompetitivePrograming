#include <stdio.h>

int main(){
    int n, i, v[100010];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    int sa[100010], sb[100010];
    sa[0] = v[0];
    sb[n-1] = v[n-1];
    
    for(i = 1; i < n; i++){
        sa[i] = v[i] + sa[i-1];
    }
    
    for(i = n-2; i >= 0; i--){
        sb[i] = v[i] + sb[i+1];
    }
    
    for(i = 0; i < n-1; i++){
       if(sa[i] == sb[i+1]){
           printf("%d\n", i+1);
           break;
       }
    }
    
    return 0;
}