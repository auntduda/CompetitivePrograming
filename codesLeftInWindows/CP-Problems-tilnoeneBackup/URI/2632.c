#include <stdio.h>
#include <string.h>

int min(int a, int b){
    if(a < b) return a;
    return b;
}

int dist(int xa, int ya, int xb, int yb){
    return (xa-xb)*(xa-xb) + (ya-yb)*(ya-yb);
}

int main(){
    int i, n;
    scanf("%d", &n);
    int ans, w, h, px0, py0, px1, py1, px2, py2, px3, py3, cx, cy, nivel, dano, raio;
    
    for(i = 0; i < n; i++){
        ans = 0;
        char nome[32];
        scanf("%d %d %d %d", &w, &h, &px0, &py0);
        
        px1 = px0;
        py1 = py0 + h;
            
        px2 = px0 + w;
        py2 = py0;
            
        px3 = px0 + w;
        py3 = py0 + h;
            
        scanf("%s %d %d %d", nome, &nivel, &cx, &cy);
        
        if(strcmp(nome, "fire") == 0){
            dano = 200;
    
            if(nivel == 1) raio = 20;
            else if(nivel == 2) raio = 30;
            else raio = 50;
    
        } else if(strcmp(nome, "water") == 0){
            dano = 300;
    
            if(nivel == 1) raio = 10;
            else if(nivel == 2) raio = 25;
            else raio = 40;
        } else if(strcmp(nome, "earth") == 0){
            dano = 400;
    
            if(nivel == 1) raio = 25;
            else if(nivel == 2) raio = 55;
            else raio = 70;
        } else{
            dano = 100;
    
            if(nivel == 1) raio = 18;
            else if(nivel == 2) raio = 38;
            else raio = 60;
        }
        
        if(dist(px0, py0, cx, cy) <= raio * raio)
            ans = dano;
        if(dist(px1, py1, cx, cy) <= raio * raio)
            ans = dano;
        if(dist(px2, py2, cx, cy) <= raio * raio)
            ans = dano;
        if(dist(px3, py3, cx, cy) <= raio * raio)
            ans = dano;
            
        if(ans == 0){
            if(cy < py3 && cy > py2){
                if(min(dist(cx, cy, px2, cy), dist(cx, cy, px0, cy)) <= raio * raio)
                    ans = dano;
            }
            
            if(cx > px1 && cx < px3){
                if(min(dist(cx, cy, cx, py1), dist(cx, cy, cx, py0)) <= raio * raio)
                    ans = dano;
            }
            
            if(cx >= px0 && cx <= px2 && cy >= py0 && cy <= py1)
                ans = dano;
        }
        
        printf("%d\n", ans);
    }

    return 0;
}