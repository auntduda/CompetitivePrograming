#include <iostream>

using namespace std;

int main() {
    string c;
    while(getline(cin, c)){
        int seq=0, maior=0, menor=0;
        bool ini=false;
        for(int j=0;j<c.size();j++){
            if(c[j]=='('){
                menor++;
                if(!ini) ini=true;
            } else if(c[j]==')' && ini){
                maior++;
                if(maior-menor==0) ini=false;
            }
        }
        int total = min(menor, maior), esq=0, dir=0;
        for(int j=0;j<c.size();j++){
            if(c[j]=='(') esq++;
            else if(c[j]==')') dir++;
        }
        if(total==esq && total==dir) cout << "correct" << endl;
        else cout << "incorrect" << endl;
    }
    
    return 0;
}