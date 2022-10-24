#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double n;
    cin >> n;

    cout << "NOTAS:" << endl;
    cout << floor(n/100) << " nota(s) de R$ 100.00\n";
    cout << floor(fmod(n,100)/50) << " nota(s) de R$ 50.00\n";
    cout << floor(fmod(fmod(n,100),50)/20) << " nota(s) de R$ 20.00\n";
    cout << floor(fmod(fmod(fmod(n,100),50),20)/10) << " nota(s) de R$ 10.00\n";
    cout << floor(fmod(fmod(fmod(fmod(n,100),50),20),10)/5) << " nota(s) de R$ 5.00\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5)/2) << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:" << endl;
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2)) << " moeda(s) de R$ 1.00\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2),1)/0.5) << " moeda(s) de R$ 0.50\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2),1),0.5)/0.25) << " moeda(s) de R$ 0.25\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2),1),0.5),0.25)/0.10) << " moeda(s) de R$ 0.10\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2),1),0.5),0.25),0.10)/0.05) << " moeda(s) de R$ 0.05\n";
    cout << floor(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(fmod(n,100),50),20),10),5),2),1),0.5),0.25),0.10),0.05)/0.01) << " moeda(s) de R$ 0.01\n";

    return 0;
}
