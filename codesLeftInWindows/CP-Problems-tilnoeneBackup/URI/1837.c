#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int q = a/b, r = a%b;
    
    if(r<0){
        if(q<0) q--;
        else if(q>0) q++;
        else{
            if(a-((q-1)*b)>=0){
                q--;
            } else{
                q++;
            }
        }
        r = a-(q*b);
    }
    
    printf("%d %d\n", q, r);
    
    return 0;
}
