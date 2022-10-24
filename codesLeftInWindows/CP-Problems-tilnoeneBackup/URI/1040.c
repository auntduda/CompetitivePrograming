#include<stdio.h>

int main() {
    double n, n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    double media = (n1*2+n2*3+n3*4+n4)/10.0;

    printf("Media: %.1lf\n", media);
    if(media>=7){
        printf("Aluno aprovado.\n");
    } else if(media<5){
        printf("Aluno reprovado.\n");
    } else{
        printf("Aluno em exame.\n");
        scanf("%lf", &n);
        printf("Nota do exame: %.1lf\n", n);
        media=(media+n)/2;
        if(media>5){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", media);
    }
    return 0;
}