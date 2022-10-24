#include <stdio.h>

int main(){
    int h, m;
    while(scanf("%d %d", &h, &m) != EOF){
        h/=30;
        m/=6;
        if(h<10){
            printf("0");
        }
        printf("%d:", h);
        if(m<10){
            printf("0");
        }
        printf("%d\n", m);
    }
    return 0;
}