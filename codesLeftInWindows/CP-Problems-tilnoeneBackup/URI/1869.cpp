#include <iostream>
#include <stdio.h>
#include <bitset>

using namespace std;

char letras[32] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};

int main(){
    long long v;
    string vt;
    while(true){
        cin >> vt;
        
        if(vt == "9223372036854775808"){
            cout << "8000000000000" << endl;
            continue;
        }
        
        v = stoll(vt);
        
        if(v == 0){
            cout << 0 << endl;
            break;
        }
        
        bitset<65> nb(v);

        string res = "";
        
        for(int i = 64; i >= 0; i -= 5){
            int p = 16, ntemp = 0;
            
            for(int j = i; j > i-5 && j >= 0; j--){
                ntemp += p*nb[j];
                p /= 2;
            }

            res += letras[ntemp];
        }
        
        bool zeros = true;
        for(int i = 0; i < res.size(); i++){
            if(!zeros) cout << res[i];
            else{
                if(res[i] != '0'){
                    zeros = false;
                    cout << res[i];
                }
            }
        }
        
        cout << endl;
        
    }
    
    return 0;
}