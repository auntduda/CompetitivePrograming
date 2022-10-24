#include <iostream>

using namespace std;

int main(){
    int t, b, a1, d1, l1, a2, d2, l2;
    double g1, g2;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> b >> a1 >> d1 >> l1 >> a2 >> d2 >> l2;
        g1=(a1+d1)/2;
        g2=(a2+d2)/2;

        if(l1%2==0){
            g1+=b;
        }
        if(l2%2==0){
            g2+=b;
        }

        if(g1<g2){
            cout << "Guarte" << endl;
        } else if(g1>g2){
            cout << "Dabriel" << endl;
        } else{
            cout << "Empate" << endl;
        }
    }

    return 0;
}
