#include <iostream>

using namespace std;

int main() {
    string f;
    while(getline(cin, f)){
        if(f=="esquerda") cout << "ingles" << endl;
        else if(f=="direita") cout << "frances" << endl;
        else if(f=="nenhuma") cout << "portugues" << endl;
        else cout << "caiu" << endl;
    }

    return 0;
}