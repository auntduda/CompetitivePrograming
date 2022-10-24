#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        int amin, amax, altura, pes=0;
        cin >> amin >> amax;
        for(int i=0;i<n;i++){
            cin >> altura;
            if(altura>=amin and altura<=amax){
                pes++;
            }
        }
        cout << pes << endl;
    }
    
    return 0;
}
