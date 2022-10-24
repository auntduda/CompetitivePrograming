#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, dif = 0;
    cin >> n;
    
    map<string, int> pokemon;
    string nome;
    for(int i = 0; i < n; i++){
        cin >> nome;
        if(pokemon[nome] == 0) dif++;
        pokemon[nome]++;
    }
    
    cout << "Falta(m) " << 151-dif << " pomekon(s)." << endl;
    
    return 0;
}