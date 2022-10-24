#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        double t, d;
        double maior=0;
        for(int i=0;i<n;i++){
            cin >> t >> d;
            double vm = d/t;
            if(vm>maior){
                maior = vm;
                cout << i+1 << endl;
            }
        }
    }
    
    return 0;
}