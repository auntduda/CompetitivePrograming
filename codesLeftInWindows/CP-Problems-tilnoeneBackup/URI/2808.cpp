#include <iostream>

using namespace std;

int main(){
    string mov;
    getline(cin, mov);
    int val=0, xc, yc, xf, yf;

    xc=int(mov[0])-96;
    yc=int(mov[1])-48;

    xf=int(mov[3])-96;
    yf=int(mov[4])-48;;

    if(yf>=1 and yf<=8 and xf>=1 and xf<=8 and xc>=0 and xc<=8 and yc>=0 and yc<=8){
        if(xf==xc-2 and (yf==yc+1 or yf==yc-1)){
            val=-1;
        } else if(xf==xc-1 and (yf==yc+2 or yf==yc-2)){
            val=-1;
        } else if(xf==xc+2 and (yf==yc+1 or yf==yc-1)){
            val=-1;
        } else if(xf==xc+1 and (yf==yc+2 or yf==yc-2)){
            val=-1;
        }
    }

    if(val==-1){
        cout << "VALIDO" << endl;
    } else{
        cout << "INVALIDO" << endl;
    }

    return 0;
}