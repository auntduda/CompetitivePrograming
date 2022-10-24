#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    while(n--){
        char a[10010], b[10010];
        scanf("%s %s", a, b);
        
        int i, tot = 0;
        for(i = 0; i < strlen(a); i++){
            
            if(a[i] <= b[i]){
                tot += b[i] - a[i];
            } else {
                tot += (26 + b[i]) - a[i];
            }
            
        }

        printf("%d\n", tot);

    }
    
    return 0;
}