#include <stdio.h>

using namespace std;

int main() {
    printf("%8c\n", 'A');
    printf("%7c%2c\n", 'B', 'B');
    printf("%6c%4c\n", 'C', 'C');
    printf("%5c%6c\n", 'D', 'D');
    printf("%4c%8c\n", 'E', 'E');
    printf("%5c%6c\n", 'D', 'D');
    printf("%6c%4c\n", 'C', 'C');
    printf("%7c%2c\n", 'B', 'B');
    printf("%8c\n", 'A');
    
    return 0;
}