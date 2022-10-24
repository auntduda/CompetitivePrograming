#include<iostream>

using namespace std;

int main(){
    string modelo, cor, tipoPapel;
    bool bluetooth=true, wifi=true, colorida=true, ligada=false, papel=true, digitalizadora=true, copiadora=false;

    cin >> modelo >> cor >> tipoPapel;

    cout << modelo << endl << cor << endl << tipoPapel << endl;

    if(bluetooth==true){
        cout << "bluetooth on" << endl;
    }
    else{
        cout << "bluetooth off" << endl;
    }

    if(wifi==true){
        cout << "wifi on" << endl;
    }
    else{
        cout << "wifi off" << endl;
    }

    if(colorida==true){
        cout << "impressão colorida" << endl;
    }
    else{
        cout << "impressão preto e branco" << endl;
    }

    if(ligada==true){
        cout << "impressora on" << endl;
    }
    else{
        cout << "impressora off" << endl;
    }

    if(papel==true){
        cout << "tem papel" << endl;
    }
    else{
        cout << "não tem papel" << endl;
    }

    if(digitalizadora==true){
        cout << "digitalizadora on" << endl;
    }
    else{
        cout << "digitalizadora off" << endl;
    }

    if(copiadora==true){
        cout << "copiadora on" << endl;
    }
    else{
        cout << "copiadora off" << endl;
    }

    if(ligada==false){
        cout << "ligando..." << endl;
        ligada=true;
    }

    if(ligada==true&&digitalizadora==true){
        cout << "digitalização sendo realizada..." << endl;
    }
    else if(ligada==true&&digitalizadora==false){
        cout << "não é possível digitalizar" << endl;
    }
    else{
        cout << "impressora desligada" << endl;
    }


    if(ligada==true&&copiadora==true){
        cout << "cópia sendo realizada..." << endl;
    }
    else if(ligada==true&&copiadora==false){
        cout << "não é possível copiar" << endl;
    }
    else{
        cout << "impressora desligada" << endl;
    }

    if(ligada==true){
        cout << "desligando..." << endl;
        ligada=false;
    }


    if(ligada==true&&papel==true){
        cout << "imprimindo..." << endl;
    }
    else if(ligada==true&&papel==false){
        cout << "sem papel" << endl;
    }
    else{
        cout << "impressora desligada" << endl;
    }

    return 0;
}