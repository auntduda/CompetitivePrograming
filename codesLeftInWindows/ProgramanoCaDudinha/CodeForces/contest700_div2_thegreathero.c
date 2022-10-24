#include<stdio.h>
#include<math.h>


struct monsters{
    int att[100000];
    int hp[100000];
};

typedef struct monsters monstro;

struct hero{
    int att;
    int hp;
};

typedef struct hero heroi;

int main(){

    int testes, i, j, att_h, hp_h, monster;

    scanf("%d", &testes);

    for(i=0; i<testes; i++){
        scanf("%d %d %d", &heroi.att, &heroi.hp, &monster);

        for(j=0; j<monster; j++){
            scanf("%d", &monstro.att[j]); 
        }
        for(j=0; j<monster; j++){
            scanf("%d", &monstro.hp[j]);
        }

    }

}