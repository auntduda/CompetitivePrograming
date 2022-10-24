#include <iostream>

using namespace std;

int main(){
    int n, ano;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> ano;
        if(ano<2015){
            cout << 2015-ano << " D.C." << endl;
        } else{
            cout << ano-2014 << " A.C." << endl;
        }
    }

    return 0;
}