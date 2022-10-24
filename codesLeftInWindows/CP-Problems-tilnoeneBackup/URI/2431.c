#include <stdio.h>

int dentro(int x, int y, int a, int b){
    if(x <= a && y <= b) return 1;
    return 0;
}

int min(int a, int b){
    if(a < b) return a;
    return b;
}

int main(){
    int a1, b1, a2, b2, a, b;
    scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a, &b);
    
    int c1x = b1 + a2;
    int c1y = min(a1, b2);
    
    //casos triviais
    if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
        printf("S\n");
        return 0;
    } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
        printf("S\n");
        return 0;
    } else{
        c1x = a1 + b2;
        c1y = min(b1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            printf("S\n");
            return 0;
        }
        
        c1x = a1 + a2;
        c1y = min(b1, b2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            printf("S\n");
            return 0;
        }
        
        c1x = b1 + b2;
        c1y = min(a1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            printf("S\n");
            return 0;
        }
        
    }
    
    printf("N\n");
    
    return 0;
}