#include <stdio.h>

int main(){
    int gi, gg, escolha=1, jogos=0, vi=0, vg=0, emp=0;
    while(escolha==1){
        jogos++;
        scanf("%d %d", &gi, &gg);
        if(gi>gg){
            vi++;
        } else if(gi<gg){
            vg++;
        } else{
            emp++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);
    }
    printf("%d grenais\n", jogos);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", emp);
    if(vi>vg){
        printf("Inter venceu mais\n");
    } else if(vi<vg){
        printf("Gremio venceu mais\n");
    } else{
        printf("Nao houve vencedor\n");
    }

    return 0;
}