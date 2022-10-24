#include <iostream>

using namespace std;

int main() {
    int x, y, m;
    while(cin >> x){
        cin >> y >> m;
        int a, b;
        for(int i=0;i<m;i++){
            cin >> a >> b;
            if((a<=x && b<=y) or (b<=x && a<=y)) cout << "Sim" << endl;
            else cout << "Nao" << endl;
        }
    }
    
    return 0;
}