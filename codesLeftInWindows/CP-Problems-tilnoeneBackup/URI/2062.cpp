#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string pal;
        cin >> pal;
        if(pal.size()==3){
            if(pal[0]=='O' and pal[1]=='B'){
                cout << "OBI";
            } else if(pal[0]=='U' and pal[1]=='R'){
                cout << "URI";
            } else{
                cout << pal;
            }
        } else{
            cout << pal;
        }
        
        if(i==n-1){
            cout << endl;
        } else{
            cout << " ";
        }
    }
    
    return 0;
}