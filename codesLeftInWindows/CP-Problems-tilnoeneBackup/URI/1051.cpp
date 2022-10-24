#include <iostream>

using namespace std;

int main(){
    double renda;
    cin >> renda;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(renda<=2000){
        cout << "Isento" << endl;
    } else{
        if(renda<=3000){
            cout << "R$ " << (8*(renda-2000))/100 << endl;
        } else{
            //maior que 3000
            if(renda<=4500){
                cout << "R$ " << (18*(renda-3000))/100+80 << endl;
            } else{
                cout << "R$ " << (28*(renda-4500))/100+270+80 << endl;
            }
        }
    }

    return 0;
}