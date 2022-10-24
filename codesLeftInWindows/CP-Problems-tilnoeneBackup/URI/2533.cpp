#include <iostream>

using namespace std;

int main() {
    int m, n, c;
    while(cin >> m){
        double soma1=0, soma2=0;
        for(int i=0;i<m;i++){
            cin >> n >> c;
            soma1+=n*c;
            soma2+=c;
        }
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << soma1/(soma2*100) << endl;
    }
    
    return 0;
}