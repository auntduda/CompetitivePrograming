#include <iostream>

using namespace std;

int main() {
    string placa;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> placa;
        if(placa.size()==8){
            if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && placa[3]=='-' && isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
                if(isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2])){
                    if(placa[7]=='1' or placa[7]=='2') cout << "MONDAY" << endl;
                    else if(placa[7]=='3' or placa[7]=='4') cout << "TUESDAY" << endl;
                    else if(placa[7]=='5' or placa[7]=='6') cout << "WEDNESDAY" << endl;
                    else if(placa[7]=='7' or placa[7]=='8') cout << "THURSDAY" << endl;
                    else cout << "FRIDAY" << endl;
                } else cout << "FAILURE" << endl;
            } else cout << "FAILURE" << endl;
        } else cout << "FAILURE" << endl;
    }

    return 0;
}