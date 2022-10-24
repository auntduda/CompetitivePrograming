#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int cases, U=0, D=0, R=0, L=0, j=0, i=0, x_planet, y_planet;

    char directions[100000];

    scanf("%d", &cases);

    for(i=0; i<cases; i++){
        scanf("%d %d", &x_planet, &y_planet);

        scanf("%s", directions);

        /*printf("%s\n", directions);*/

        while(directions[j] != '\0'){
            if(directions[j] == 'U'){
                U += 1;
            }
            if(directions[j] == 'D'){
                D += 1;
            }
            if(directions[j] == 'R'){
                R += 1;
            }
            if(directions[j] == 'L'){
                L += 1;
            }

            j++;
        }

        /*printf("U = %d\nD = %d\nR = %d\nL = %d\n", U, D, R, L);*/
        
        if(x_planet>0){
            if(y_planet>0){
                if(R >= abs(x_planet) && U >= abs(y_planet)){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            if(y_planet<0){
                if(R >= abs(x_planet) && D>=abs(y_planet)){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
        }
        else{
           if(y_planet>0){
                if(L >= abs(x_planet) && U >= abs(y_planet)){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            if(y_planet<0){
                if(L >= abs(x_planet) && D>=abs(y_planet)){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            } 
        }

        R=0;
        L=0;
        U=0;
        D=0;

        j=0;
        while(directions[j] != '\0'){
            directions[j] = 0;

            j++;
        }

        j=0;

    }

    return 0;
}
