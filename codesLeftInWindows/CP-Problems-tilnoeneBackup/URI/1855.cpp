#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int vis[y][x];
    char mapa[y][x];
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin >> mapa[i][j];
            vis[i][j]=0;
        }
    }

    int i=0, j=0;
    bool existe=false;
    char dir;
    while(!existe){
        if(vis[i][j]==1 or i>=y or i<0 or j>=x or j<0) break;
        vis[i][j]=1;
        
        if(mapa[i][j]=='*'){
            existe=true;
            break;
        } else if(mapa[i][j]!='.') dir = mapa[i][j];
        
        if(dir=='>') j++;
        else if(dir=='<') j--;
        else if(dir=='^') i--;
        else if(dir=='v') i++;
    }
    if(existe) cout << "*" << endl;
    else cout << "!" << endl;
    
    return 0;
}