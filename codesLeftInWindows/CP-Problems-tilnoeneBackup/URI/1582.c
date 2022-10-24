#include <stdio.h>
#define true 1
#define false 0

int gcd(int a, int b)
{
    int temp;
    while(b != 0){
        temp = a % b;

        a = b;
        b = temp;
    }
    
    return a;
}

int pitagoras(int a, int b, int c){
    if(a*a + b*b == c*c) return true;
    return false;
}

int main(){
    int a, b, c, temp;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if(b > a && b > c){
            temp = a;
            a = b;
            b = temp;
        } else if(c > a && c > b){
            temp = a;
            a = c;
            c = temp;
        }
        
        int triplaP = false, triplaPP = false;
        
        
        if(a*a == b*b + c*c){
            triplaP = true;
            if(gcd(gcd(a, b), c) == 1) triplaPP = true;
        }
        
        if(triplaP == true){
            if(triplaPP == true) printf("tripla pitagorica primitiva\n");
            else printf("tripla pitagorica\n");
        } else printf("tripla\n");

    }
    
    return 0;
}