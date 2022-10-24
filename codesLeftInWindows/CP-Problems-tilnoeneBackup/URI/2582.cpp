#include <iostream>

using namespace std;

int main() {
    int c, x, y;
    string musicas[11]={"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
    cin >> c;
    for(int i=0;i<c;i++){
        cin >> x >> y;
        cout << musicas[x+y] << endl;
    }
    return 0;
}