#include <iostream>

using namespace std;

int main() {
    int n, x, y, cx, cy;
    while(true){
        cin >> n;
        if(n==0) break;
        cin >> cx >> cy;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            if(x==cx or y==cy) cout << "divisa" << endl;
            else if(x>cx){
                if(y>cy) cout << "NE" << endl;
                else cout << "SE" << endl;
            } else{
                if(y>cy) cout << "NO" << endl;
                else cout << "SO" << endl;
            }
        }
    }
    
    return 0;
}