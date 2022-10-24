#include <iostream>

using namespace std;

int main(){
    int n, v, s=0, r=0, c=0;
    char animal;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v >> animal;
        if(animal=='C'){
            c+=v;
        } else if(animal=='R'){
            r+=v;
        } else{
            s+=v;
        }
    }
    double soma = c+r+s;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "Total: " << c+r+s << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << (100*c)/soma << " %" << endl;
    cout << "Percentual de ratos: " << (100*r)/soma << " %" << endl;
    cout << "Percentual de sapos: " << (100*s)/soma << " %" << endl;

    return 0;
}