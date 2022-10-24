#include <iostream>

using namespace std;
    
int n, m, s, fig, posX, posY;    
char mapa[110][110], ori;

void moveRobot(char inst){
    char dir[4] = {'N', 'L', 'S', 'O'};
    
    if(inst == 'F'){
        int i = posX, j = posY;
        
        if(ori == 'N') i--;
        else if(ori == 'S') i++;
        else if(ori == 'L') j++;
        else j--;
        
        if(i >= 0 && i < n && j >= 0 && j < m && mapa[i][j] != '#'){
            if(mapa[i][j] == '*'){
                fig++;
                mapa[i][j] = '.';
            }
            posX = i;
            posY = j;
        }
        
    } else if(inst == 'D'){
        int i;
        for(i = 0; i < 4; i++)
            if(dir[i] == ori) break;
        
        if(i == 3) ori = 'N'; 
        else ori = dir[i+1];
    } else{
        int i;
        for(i = 3; i >= 0; i--)
            if(dir[i] == ori) break;
        
        if(i == 0) ori = 'O';
        else ori = dir[i-1];
    }
    
    return;
}

int main(){
    
    while(true){
        cin >> n >> m >> s;
        if(n == 0 && m == 0 && s == 0) break;
        
        fig = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mapa[i][j];
                
                if(isalpha(mapa[i][j])){
                    ori = mapa[i][j];
                    posX = i;
                    posY = j;
                }
                
            }
        }
        
        char inst;
        for(int i = 0; i < s; i++){
            cin >> inst;
            moveRobot(inst);
        }
        
        cout << fig << endl;
    }
    
    return 0;
}