#include <stdio.h>

int main() {
    char f[30] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n", f);
    printf("<%30s>\n", f);
    printf("<%.20s>\n", f);
    printf("<%-20s>\n", f);
    printf("<%-30s>\n", f);
    printf("<%.30s>\n", f);
    printf("<%30.20s>\n", f);
    printf("<%-30.20s>\n", f);
    
    return 0;
}