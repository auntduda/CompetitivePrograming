#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n, k = 1;
    while(cin >> n){
        if(k != 1) cout << endl;
        cin.ignore();
        string txt, temp1, temp2;
        getline(cin, txt);

        stringstream str_strm(txt);
        
        int tf = 0, tm = 0;
        while(str_strm >> temp1){
            str_strm >> temp2;
            
            if(stoi(temp1) == n){
                if(temp2 == "F") tf++;
                else tm++;
            }
            
        }
        
        cout << "Caso " << k << ":" << endl;
        cout << "Pares Iguais: " << tf+tm << endl << "F: " << tf << endl << "M: " << tm << endl;
        k++;
    }

    return 0;
}