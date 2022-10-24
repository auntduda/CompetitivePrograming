#include <iostream>

using namespace std;

int main() {
    int v, k=0;
    while(true){
        cin >> v;
        if(v==0){
            break;
        }
        
        if(k==0){
            k++;
        } else{
            cout << endl;
        }
        string pal[v];
        int maior = 0;
        for(int i=0;i<v;i++){
            cin >> pal[i];
            if(pal[i].size()>maior){
                maior=pal[i].size();
            }
        }
        for(int i=0;i<v;i++){
            for(int j=0;j<maior-pal[i].size();j++){
                cout << " ";
            }
            cout << pal[i] << endl;
        }
    }
}