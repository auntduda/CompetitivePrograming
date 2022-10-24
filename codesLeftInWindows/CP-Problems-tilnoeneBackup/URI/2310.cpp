#include <iostream>

using namespace std;

int main(){
    int n, s, b, a;
    double ts=0, tb=0, ta=0, as=0, ab=0, aa=0;
    string nome;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nome >> s >> b >> a;
        ts+=s;
        tb+=b;
        ta+=a;
        cin >> s >> b >> a;
        as+=s;
        ab+=b;
        aa+=a;
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "Pontos de Saque: " << (as*100)/ts << " %." << endl;
    cout << "Pontos de Bloqueio: " << (ab*100)/tb << " %." << endl;
    cout << "Pontos de Ataque: " << (aa*100)/ta << " %." << endl;

    return 0;
}