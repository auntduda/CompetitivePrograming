#include <iostream>

using namespace std;

int main(){
    int v;
    string meses[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cin >> v;
    cout << meses[v-1] << endl;

    return 0;
}
