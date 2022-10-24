#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char, char> c;
    
    for(int i = 0; i < 256; i++){
        c[char(i)] = char(i);
    }
    
    c['@'] = 'a';
    c['&'] = 'e';
    c['!'] = 'i';
    c['*'] = 'o';
    c['#'] = 'u';
    
    string frase;
    while(getline(cin, frase)){
        for(int i = 0; i < frase.size(); i++){
            cout << c[frase[i]];
        }
        cout << endl;
    }
    
    return 0;
}