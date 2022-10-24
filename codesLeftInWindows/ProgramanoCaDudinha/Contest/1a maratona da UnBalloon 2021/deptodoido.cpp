#include<bits/stdc++.h>

using namespace std;

int professores;
vector<vector<bool>> grafo(professores);
vector<bool> verificar(professores);

bool BEP(int profA, int profB){
    if(grafo[profA][profB] == true) return true;

    for(int i=0; i<grafo.size(); i++){
        if(grafo[profA][i] == true){
            grafo[profA][i] = false;
            grafo[i][profA] = false;
            return BEP(i, profA);
            grafo[profA][i] = true;
            grafo[i][profA] = true;
        }
    }
    
    return false;
}


int main(){

    int comandos, tipo, profA, profB;
    
    scanf("%d %d", &professores, &comandos);

    for(int i=0; i<professores; i++){
        vector<bool> conexao(professores, false);
        grafo.push_back(conexao);
    }
    
    for(int i=0; i<comandos; i++){
        scanf("%d %d %d", &tipo, &profA, &profB);

        if(tipo==1){
            grafo[profA][profB] = true;
            grafo[profB][profA] = true;
        }
        if(tipo==2){
            if(BEP(profA, profB)){
                printf("SIM\n");
            }
            else
                printf("NAO\n");
        }
    }

    return 0;
}