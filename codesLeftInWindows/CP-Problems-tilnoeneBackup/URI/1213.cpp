#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        long long int l = 1, k=1;
        while(l%n!=0){
            l*=10;
            l++;
            k++;
        }
        cout << k << endl;
    }

    return 0;
}