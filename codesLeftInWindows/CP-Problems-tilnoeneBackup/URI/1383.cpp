#include <iostream>

using namespace std;

int main(){
    int n, v;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Instancia " << i << endl;
        
        int vetor[9][10];
        int lin[9][10];
        int col[9][10];
        int quad[9][10];
        
        bool certo = true;
        
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 10; k++){
                lin[j][k] = 0;
                col[j][k] = 0;
                quad[j][k] = 0;
            }
        }
        
        for(int j = 0; j < 9; j++){
            for(int k = 0; k < 9; k++){
                cin >> v;
                vetor[j][k] = v;

                if(certo){
                    if(lin[j][v] > 0) certo = false;
                    else if(col[k][v] > 0) certo = false;
                    
                    lin[j][v]++;
                    col[k][v]++;
                }
            }
        }
        
        int cq = 0;
        for(int j = 0; j <= 6; j += 3){
            for(int k = 0; k <= 6; k += 3){
                
                for(int it = j; it < j+3; it++){
                    for(int jt = k; jt < k+3; jt++){
                        
                        int elem = vetor[it][jt];
                        
                        if(certo){
                            if(quad[cq][elem] > 0) certo = false;
                            quad[cq][elem]++;
                        }
                        
                    }
                }
                
                cq++;
                
            }
        }
        
        if(certo) cout << "SIM" << endl;
        else cout << "NAO" << endl;
        cout << endl;
    }
    
    return 0;
}