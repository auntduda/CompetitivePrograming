#include <iostream>
#include <map>

using namespace std;

int main() {
    int c, n;
    while(cin >> c){
        cin >> n;
        cin.ignore();
        string c1, c2, frase;
        getline(cin, c1);
        getline(cin, c2);
        map<char, char> ascii;
        for(int i=0;i<c;i++){
            ascii[toupper(c1[i])] = toupper(c2[i]);
            ascii[tolower(c1[i])] = tolower(c2[i]);
            ascii[toupper(c2[i])] = toupper(c1[i]);
            ascii[tolower(c2[i])] = tolower(c1[i]);
        }
        for(int i=0;i<n;i++){
            getline(cin, frase);
            for(int j=0;j<frase.size();j++){
                char letra = ascii[frase[j]];
                if(letra!=NULL) cout << ascii[frase[j]];
                else cout << frase[j];
            }
            cout << endl;
        }
        cout << endl;
        
    }

    return 0;
}