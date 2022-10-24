#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        string idiomas[k];
        bool dif = false;
        for(int j=0;j<k;j++){
            cin >> idiomas[j];
            if(j>0){
                if(idiomas[j]!=idiomas[j-1]){
                    dif = true;
                }
            }
        }
        
        if(dif){
            cout << "ingles" << endl;
        } else{
            cout << idiomas[0] << endl;
        }
    }
    
    return 0;
}