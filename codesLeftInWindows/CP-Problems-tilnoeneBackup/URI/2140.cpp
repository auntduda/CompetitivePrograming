#include <iostream>

using namespace std;

int main(){
    int m, n, dif;
    while(true){
        cin >> n >> m;
        if(n==0 and m==0){
            break;
        }
        dif=m-n;
        switch(dif){
            // notas iguais
            case 4:
                cout << "possible" << endl;
                break;
            case 10:
                cout << "possible" << endl;
                break;
            case 40:
                cout << "possible" << endl;
                break;
            case 100:
                cout << "possible" << endl;
                break;
            case 200:
                cout << "possible" << endl;
                break;
            
            // notas diferentes
            case 7:
                cout << "possible" << endl;
                break;
            case 12:
                cout << "possible" << endl;
                break;
            case 22:
                cout << "possible" << endl;
                break;
            case 52:
                cout << "possible" << endl;
                break;
            case 102:
                cout << "possible" << endl;
                break;
            case 15:
                cout << "possible" << endl;
                break;
            case 25:
                cout << "possible" << endl;
                break;
            case 55:
                cout << "possible" << endl;
                break;
            case 105:
                cout << "possible" << endl;
                break;
            case 30:
                cout << "possible" << endl;
                break;
            case 60:
                cout << "possible" << endl;
                break;
            case 110:
                cout << "possible" << endl;
                break;
            case 70:
                cout << "possible" << endl;
                break;
            case 120:
                cout << "possible" << endl;
                break;
            case 150:
                cout << "possible" << endl;
                break;
            default:
                cout << "impossible" << endl;
        }
    }

    return 0;
}