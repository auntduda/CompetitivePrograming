#include <iostream>

using namespace std;

int main(){
    int p, n, c, v, k=0;
    cin >> p >> n >> c;
    for(int i=1;i<n;i++){
        cin >> v;
        if(k==0){
            if(abs(v-c)>p){
                k=-1;
            } else{
                c=v;
            }
        }
    }
    if(k==0){
        cout << "YOU WIN" << endl;
    } else{
        cout << "GAME OVER" << endl;
    }
    return 0;
}