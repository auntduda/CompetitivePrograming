#include <stdio.h>

using namespace std;

int main(){
    char a[32];
    scanf("%s", a);
    
    printf("%c%c/%c%c/%c%c\n", a[3], a[4], a[0], a[1], a[6], a[7]);
    printf("%c%c/%c%c/%c%c\n", a[6], a[7], a[3], a[4], a[0], a[1]);
    printf("%c%c-%c%c-%c%c\n", a[0], a[1], a[3], a[4], a[6], a[7]);
	
	return 0;
}