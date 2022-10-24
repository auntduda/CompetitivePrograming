#include<bits/stdc++.h>
#include<queue>

using namespace std;

/*int fila(int *l, int pos){
    int i;

    if(l == NULL){
        return -1;
    }

    int aux = l[pos];
    
    for(i=pos; i<qtd-1; i++){
        l[i] = l[i+1];
    }

    return aux;
}

int elem(int *l, int pos){
    int i;
    
    if(l == NULL){
        return -1;
    }

    for(i=0; i<qtd; i++){
        if(i == pos){
            return i;
        }
    }

    return -1;
} */

struct Animal{
    int sa;
    int sb;
    int sc;
    int wins=0;
    
};

typedef Animal Animal;

int strength(Animal c){
    if(c.wins<0){
        return 0;
    }
    if(c.wins == 0){
        return c.sa;
    }
    if(c.wins == 1){
        return c.sb;
    }
    if(c.wins == 2){
        return c.sc;
    }

    return -1;
}

Animal fight(Animal a, Animal b){
    int forca_a, forca_b;

    forca_a = strength(a);

    forca_b = strength(b);

    if(forca_a > forca_b){
        return a;
    }
    else{
        return b;
    }
}


int main(){

    int qtd, rodadas=0, vencedor;
    bool flag=false;

    scanf("%d", &qtd);

    Animal animal[qtd];

    for(int i=0; i<qtd; i++){
        scanf("%d %d %d", &animal[i].sa, &animal[i].sb, &animal[i].sc);
    }

    int manip[qtd];

    for(int i=0; i<qtd; i++){
        manip[i] = i;
    }

    Animal king = animal[0];

    while(king.wins != 3){
        king = fight(animal[manip[0]], animal[manip[1]]);

        king.wins++;

        rodadas++;

        if(king.sa == animal[manip[0]].sa){
            int bichim = manip[1];
            
            for(int i=1; i<qtd-1; i++){
                manip[i] = manip[i+1];
            }

            manip[qtd-1] = bichim;

            /*int saiu = fila(manip, manip[1]);
            manip[qtd] = saiu; */
        }
        
        if(king.sa == animal[manip[1]].sa){
            int bichim = manip[0];
            
            manip[0] = manip[1];

            for(int i=1; i<qtd-1; i++){
                manip[i] = manip[i+1];
            }

            manip[qtd-1] = bichim;
            
            /*int saiu = fila(manip, manip[0]);
            manip[qtd] = saiu; */
        }

        if(rodadas >= 36000000){
            flag=true;
            break;
        }
    }

    if(flag){
        printf("-1 -1\n");

        return 0;
    }

    for(int i=0; i<qtd; i++){
        if(king.wins == animal[i].wins){
            vencedor = i;
            break;
        }
    }

    printf("%d %d\n", vencedor, rodadas);

    return 0;
}