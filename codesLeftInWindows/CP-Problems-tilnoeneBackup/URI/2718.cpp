#include <iostream>

using namespace std;

int main() {
    long long n, um=0;
    cin >> n;
    
    while(n--){
        long long v, um = 0, maior=0;
        cin >> v;
        bool seq = true;
        
        while(v>0){
            if(v%2!=0){
                um++;
                seq = true;
                if(seq && um>maior) maior=um;
            } else{
                seq=false;
                um = 0;
            }
            v>>=1;
        }
        
        cout << maior << endl;
    }
    return 0;
}