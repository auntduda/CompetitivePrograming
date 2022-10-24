#include <iostream>

using namespace std;

int ctoi(char n){ return (int)n-48;}

int main(){
    string hora;
    int h, m;
    while(cin >> hora){
        if(hora.size()==5){
            h = ctoi(hora[0])*10+ctoi(hora[1]);
            m = ctoi(hora[3])*10+ctoi(hora[4]);
        } else{
            h = ctoi(hora[0]);
            m = ctoi(hora[2])*10+ctoi(hora[3]);
        }
        if(h<7){
            cout << "Atraso maximo: 0" << endl;
        } else{
            m+=60*(h-7);
            cout << "Atraso maximo: " << m << endl;
        }
    }

    return 0;
}