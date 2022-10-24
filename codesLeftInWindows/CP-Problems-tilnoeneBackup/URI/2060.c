#include <stdio.h>

int main(){
    int n, v, i, mult[4]={0, 0, 0, 0};
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &v);
        if(v%2==0){
            mult[0]++;
        }
        if(v%3==0){
            mult[1]++;
        }
        if(v%4==0){
            mult[2]++;
        }
        if(v%5==0){
            mult[3]++;
        }
    }
    printf("%d Multiplo(s) de 2\n", mult[0]);
    printf("%d Multiplo(s) de 3\n", mult[1]);
    printf("%d Multiplo(s) de 4\n", mult[2]);
    printf("%d Multiplo(s) de 5\n", mult[3]);

    return 0;
}