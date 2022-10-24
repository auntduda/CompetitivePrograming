#include <iostream>

using namespace std;

int main(){
    string ori, f;
    cin >> ori;
    
    int k;
    cin >> k;
    
    int dif[5], i, j;
    
    for(i = 0; i < 5; i++){
        cin >> f;
        int temp = 0;
        
        for(j = 0; j < f.size(); j++)
            if(f[j] == ori[j]) temp++;
        
        dif[i] = temp;
    }
    
    int maior = 0;
    
    for(i = 0; i < 5; i++)
        if(dif[i] > maior) maior = dif[i];
    
    if(ori.size() - maior > k) cout << -1 << endl;
    else{
        for(i = 0; i < 5; i++){
            if(dif[i] == maior){
                cout << i+1 << endl;
                cout << ori.size() - maior << endl;
                break;
            }
        }
    }
    
    return 0;
}