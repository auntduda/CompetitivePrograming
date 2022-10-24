#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c, mab;
    cin >> a >> b >> c;

    mab = (a+b+abs(a-b))/2;

    cout << (mab+c+abs(mab-c))/2 << " eh o maior" << endl;

    return 0;
}
