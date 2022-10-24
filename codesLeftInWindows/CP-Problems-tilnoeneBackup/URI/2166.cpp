#include <iostream>

using namespace std;

double fracao(double n){
    if(n==0){
        return 0; 
    } else if(n==1){
        return 1/2.0;
    }
    return 1.0/(2+fracao(n-1));
}

int main() {
    int n;
    cin >> n;
    
    cout.precision(10);
    cout.setf(ios::fixed);

    cout << 1.0+fracao(n) << endl;
	
    return 0;
}
