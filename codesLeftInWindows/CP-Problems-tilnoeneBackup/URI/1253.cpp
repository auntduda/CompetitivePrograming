#include <iostream>

using namespace std;

int main(){
    string palavra;
    int n, c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> palavra >> c;
        for(int j=0;j<palavra.size();j++){
            if(int(palavra[j])-int(c)<65){
                cout << char(26+int(palavra[j])-c);
            } else{
                cout << char(int(palavra[j])-int(c));
            }
        }
        cout << endl;
    }

    return 0;
}