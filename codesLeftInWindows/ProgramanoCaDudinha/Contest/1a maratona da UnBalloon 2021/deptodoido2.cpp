#include<bits/stdc++.h>

using namespace std;

int professores;
vector<pair <int, int>> fila;
vector<vector<bool>> grafo;

bool BEP(int a, int b){
    if (grafo[a][b])
        return true;
    for(int i = 0; i < professores; i++){
        if(grafo[a][i] == 1){
            grafo[a][i] = 0;
            grafo[i][a] = 0;
            fila.push_back(make_pair(a, i));
            BEP(i, b);
        }
    }
    return false;
}


int main(){

    int comandos, tipo, profA, profB;
    
    scanf("%d %d", &professores, &comandos);
    for(int i = 0; i < professores; i++){
        vector<bool> l(professores, false);
        grafo.push_back(l);
    }

    for(int i=0; i<comandos; i++){
        scanf("%d %d %d", &tipo, &profA, &profB);
        
        if(tipo==1){
            grafo[profA][profB] =  true;
            grafo[profB][profA] = true;
        }
        if(tipo==2){
            if(BEP(profA, profB))
                printf("SIM\n");
            for(int i = 0; i < (int)fila.size(); i++){
                grafo[fila[i].first][fila[i].second] = 1;
                grafo[fila[i].second][fila[i].first] = 1;
            }
            fila.clear();
            printf("NAO\n");
        }
    }

    return 0;
}