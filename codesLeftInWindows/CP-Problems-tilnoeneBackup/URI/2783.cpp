#include <iostream>

using namespace std;

int main() {
    int n, c, m;
    cin >> n >> c >> m;
    int faltam[c], v, res=0;
    for(int i=0;i<c;i++) cin >> faltam[i];
    int yi;
    for(int i=0;i<m;i++){
        cin >> yi;
        for(int j=0;j<c;j++){
            if(faltam[j]==yi){
                faltam[j] = -1;
                res++;
                break;
            }
        }
    }
    cout << c-res << endl;
    
    return 0;
}