#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    int n, k;
    scanf("%d", &n);

    for(k = 0; k < n; k++){
        char senha[64];
        scanf(" %[^\n]", senha);
        
        int i, it = 0;
        for(i = 0; i < strlen(senha) && it < 12; i++){
            if(senha[i] != ' '){
                if(senha[i] == 'G' || senha[i] == 'Q' || senha[i] == 'a' || senha[i] == 'k' || senha[i] == 'u')
                    printf("0");
                else if(senha[i] == 'I' || senha[i] == 'S' || senha[i] == 'b' || senha[i] == 'l' || senha[i] == 'v')
                    printf("1");
                else if(senha[i] == 'E' || senha[i] == 'O' || senha[i] == 'Y' || senha[i] == 'c' || senha[i] == 'm' || senha[i] == 'w')
                    printf("2");
                else if(senha[i] == 'F' || senha[i] == 'P' || senha[i] == 'Z' || senha[i] == 'd' || senha[i] == 'n' || senha[i] == 'x')
                    printf("3");
                else if(senha[i] == 'J' || senha[i] == 'T' || senha[i] == 'e' || senha[i] == 'o' || senha[i] == 'y')
                    printf("4");
                else if(senha[i] == 'D' || senha[i] == 'N' || senha[i] == 'X' || senha[i] == 'f' || senha[i] == 'p' || senha[i] == 'z')
                    printf("5");
                else if(senha[i] == 'A' || senha[i] == 'K' || senha[i] == 'U' || senha[i] == 'g' || senha[i] == 'q')
                    printf("6");
                else if(senha[i] == 'C' || senha[i] == 'M' || senha[i] == 'W' || senha[i] == 'h' || senha[i] == 'r')
                    printf("7");
                else if(senha[i] == 'B' || senha[i] == 'L' || senha[i] == 'V' || senha[i] == 'i' || senha[i] == 's')
                    printf("8");
                else if(senha[i] == 'H' || senha[i] == 'R' || senha[i] == 'j' || senha[i] == 't')
                    printf("9");
                    
                it++;
            }
        }
        
        printf("\n");
    }
    
}