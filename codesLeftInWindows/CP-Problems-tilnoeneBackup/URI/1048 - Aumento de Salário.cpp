#include <iostream>

using namespace std;

int escreve(double salario, int porcentagem){
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "Novo salario: " << (salario*(100+porcentagem))/100 << endl;
    cout << "Reajuste ganho: " << (porcentagem*salario)/100 << endl;
}

int main(){
    double salario;
    cin >> salario;

    if(salario<=400){
        escreve(salario, 15);
        cout << "Em percentual: 15 %" << endl;
    } else if(salario<=800){
        escreve(salario, 12);
        cout << "Em percentual: 12 %" << endl;
    } else if(salario<=1200){
        escreve(salario, 10);
        cout << "Em percentual: 10 %" << endl;
    } else if(salario<=2000){
        escreve(salario, 7);
        cout << "Em percentual: 7 %" << endl;
    } else {
        escreve(salario, 4);
        cout << "Em percentual: 4 %" << endl;
    }



    return 0;
}
