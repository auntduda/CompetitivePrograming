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

    int testes, i, j, monster, k=0, hp_heroi, hp_monstro, m=0;

    scanf("%d", &testes);

    for(i=0; i<testes; i++){
        scanf("%d %d %d", &heroi.att, &heroi.hp, &monster);

        for(j=0; j<monster; j++){
            scanf("%d", &monstro.att[j]); 
        }
        for(j=0; j<monster; j++){
            scanf("%d", &monstro.hp[j]);
        }

        //sort(monstro.att[monster], monstro.att[-1]); [maior,0,0,0,0,0,0,0,0,0,menor]
        //sort(monstro.hp[monster], monstro.hp[-1]); //[maior,0,0,0,0,0,0,0,0,0,menor]

        while(heroi.hp > 0 || monstro.hp[k] > 0){ 
            monstro.hp[k] = monstro.hp[k] - heroi.att;

            if(monstro.hp[k] > 0){
                heroi.hp = heroi.hp - monstro.att[k];
            }
            
            if(k == monster){
                k=0;
            }
            else{
                k++;
            }
        }

        if(heroi.hp <=0){
            if(monstro.hp[m] <= 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            if(monstro.hp[m] <= 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }


    }

    return 0;

}