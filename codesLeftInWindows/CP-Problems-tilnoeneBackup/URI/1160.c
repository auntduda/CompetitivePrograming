#include <stdio.h>

int main(){
    int t, pa, pb, anos, i;
    double g1, g2;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        anos=0;
        while(1){
            if(anos>100 || pa>pb){
                break;
            }
            pa+=pa*g1/100;
            pb+=pb*g2/100;
            anos++;
        }
        if(anos>100){
            printf("Mais de 1 seculo.\n");
        } else{
            printf("%d anos.\n", anos);
        }
    }


    return 0;
}