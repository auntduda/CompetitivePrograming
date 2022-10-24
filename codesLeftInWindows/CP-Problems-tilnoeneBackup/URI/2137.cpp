#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        string livros[n];
        for(int i=0;i<n;i++){
            cin >> livros[i];
        }
        sort(livros, livros+n);
        for(int i=0;i<n;i++){
            cout << livros[i] << endl;
        }
    }
    
    return 0;
}