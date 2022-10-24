#include<iostream>

using namespace std;

int main(){
    double temperatura;

    scanf("%lf", &temperatura);

    printf("temperatura: %.1lf graus fahrenheit\n", (temperatura * 9.0 / 5.0 + 32));
    printf("temperatura: %.1lf graus celsius\n", temperatura);

    return 0;
}