#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nc, n;
    cin >> nc;
    while(nc--){
        int h[231] = {}, altura, maior = 20;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> altura;
            h[altura]++;
            
            if(altura > maior){
                maior = altura;
            }
        }
        
        bool is = false;
        for(int i = 20; i <= 230; i++){
            if(h[i] > 0){
                if(i == maior){
                    is = true;
                }
                
                for(int j = 0; j < h[i]; j++){

                    cout << i;

                    if(is && j == h[i]-1){
                        cout << "\n";
                    } else{
                        cout << " ";
                    }
                    
                }

            }
        }

    }

    return 0;
}