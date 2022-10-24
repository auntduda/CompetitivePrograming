#include <iostream>

using namespace std;

int main(){
    int t, pa, pb, anos;
    double g1, g2;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> pa >> pb >> g1 >> g2;
        anos=0;
        while(true){
            if(anos>100 or pa>pb){
                break;
            }
            pa+=pa*g1/100;
            pb+=pb*g2/100;
            anos++;
        }
        if(anos>100){
            cout << "Mais de 1 seculo." << endl;
        } else{
            cout << anos << " anos." << endl;
        }
    }


    return 0;
}