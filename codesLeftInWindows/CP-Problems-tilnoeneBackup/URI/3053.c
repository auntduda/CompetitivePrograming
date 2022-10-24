#include <stdio.h>

void troca(int pos[3], int a, int b){
    int temp;
    temp = pos[a];
    pos[a] = pos[b];
    pos[b] = temp;
}

int main() {
    int n, pos[3] = {}, mov, i;
    char c;
    scanf("%d %c", &n, &c);
    pos[((int)c)-65] = 1;
    for(i=0;i<n;i++){
        scanf("%d", &mov);
        if(mov==1) troca(pos, 0, 1);
        else if(mov==2) troca(pos, 1, 2);
        else troca(pos, 0, 2);
    }
    for(i=0;i<3;i++){
        if(pos[i]==1) printf("%c\n", (char)(65+i));
    }
 
    return 0;
}