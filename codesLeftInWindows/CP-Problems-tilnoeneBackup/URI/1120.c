#include <stdio.h>

int main() {
    int n;
    char num, num2;
    while(1){
        scanf("%c", &num);
        if(num=='0'){
            break;
        }
        scanf("%c", &num2);
        int val = 0;
        while(1){
            scanf("%c", &num2);
            if(num2=='\n'){
                if(val==0){
                    printf("0");
                }
                break;
            }
            // caso espaços a direita / esquerda, quantas vezes alterou pq se foi 0 printa o 0
            if(val==0){
                if(num2!='0' && num2!=num){
                    printf("%c", num2);
                    val = 1;
                }
            } else{
                if(num2!=num) printf("%c", num2);
            }
            
        }
        printf("\n");
    }
    
    return 0;
}