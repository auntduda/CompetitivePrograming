#include <iostream>

using namespace std;

int main(){
    int n, v, k;
    double soma=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v >> k;
        switch(v){
            case 1001:
                soma+=1.5*k;
                break;
            case 1002:
                soma+=2.5*k;
                break;
            case 1003:
                soma+=3.5*k;
                break;
            case 1004:
                soma+=4.5*k;
                break;
            default:
                soma+=5.5*k;
        }
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << soma << endl;
    return 0;
}