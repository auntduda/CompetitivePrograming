#include <iostream>

using namespace std;

int main(){
    string msg;
    int letra;
    while(getline(cin, msg)){
        for(int i=0;i<msg.size();i++){
            if(isalpha(msg[i])){
                if(isupper(msg[i])){
                    letra = int(msg[i]);
                    if(letra+13>90){
                        letra=64+(13-(90-letra));
                    } else{
                        letra=letra+13;
                    }
                    cout << char(letra);
                } else{
                    letra = int(msg[i]);
                    if(letra+13>122){
                        letra=96+(13-(122-letra));
                    } else{
                        letra=letra+13;
                    }
                    cout << char(letra);
                }
            } else{
                cout << msg[i];
            }
        }
        cout << endl;
    }

    return 0;
}