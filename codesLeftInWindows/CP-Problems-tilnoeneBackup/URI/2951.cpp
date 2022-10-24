#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, g, soma=0, v;
    char letra;
    cin >> n >> g;
    map<char, int> runas;
    for(int i=0;i<n;i++){
        cin >> letra >> v;
        runas[letra] = v;
    }
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> letra;
        soma+=runas[letra];
    }
    cout << soma << endl;
    if(soma>=g) cout << "You shall pass!" << endl;
    else cout << "My precioooous" << endl;
    
    return 0;
}