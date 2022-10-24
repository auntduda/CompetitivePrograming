#include <iostream>

using namespace std;

int main() {
    int n, m;
    while(cin >> n){
        cin >> m;
        int tab[n][m], fim[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin >> tab[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int paes = 0;
                if(tab[i][j]==1) paes = 9;
                else{
                    if(i==0){
                        if(tab[i+1][j]==1) paes++;
                    } else if(i==n-1){
                        if(tab[i-1][j]==1) paes++;
                    } else{
                        if(tab[i+1][j]==1) paes++;
                        if(tab[i-1][j]==1) paes++;
                    }
                    
                    if(j==0){
                        if(tab[i][j+1]==1) paes++;
                    } else if(j==m-1){
                        if(tab[i][j-1]==1) paes++;
                    } else{
                        if(tab[i][j+1]==1) paes++;
                        if(tab[i][j-1]==1) paes++;
                    }
                }
                fim[i][j]=paes;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cout << fim[i][j];
            cout << endl;
        }
    }
    
    return 0;
}