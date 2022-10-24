#include <stdio.h>
#include <string>

using namespace std;

int main() {
    double x;
    scanf("%lf", &x);
    if(x>=0 && to_string(x)[0]!='-') printf("+");
    printf("%.4E\n", x);
    
    return 0;
}