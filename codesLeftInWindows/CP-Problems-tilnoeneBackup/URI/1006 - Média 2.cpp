#include <iostream>

using namespace std;

int main(){
    double a, b, c,  media;

    cin >> a >> b >> c;

    media = (a*2+b*3+c*5)/10;

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << "MEDIA = " << media << endl;
}
