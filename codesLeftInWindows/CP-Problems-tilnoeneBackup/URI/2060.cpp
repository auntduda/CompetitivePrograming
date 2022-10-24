#include <iostream>

using namespace std;

int main(){
    int n, v, mult[4]={0, 0, 0, 0};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v;
        if(v%2==0){
            mult[0]++;
        }
        if(v%3==0){
            mult[1]++;
        }
        if(v%4==0){
            mult[2]++;
        }
        if(v%5==0){
            mult[3]++;
        }
    }
    cout << mult[0] << " Multiplo(s) de 2" << endl;
    cout << mult[1] << " Multiplo(s) de 3" << endl;
    cout << mult[2] << " Multiplo(s) de 4" << endl;
    cout << mult[3] << " Multiplo(s) de 5" << endl;

    return 0;
}