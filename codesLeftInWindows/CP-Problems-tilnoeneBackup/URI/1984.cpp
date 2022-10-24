#include <iostream>

using namespace std;

int main(){
    long long int n;
    cin >> n;
    string v = to_string(n);
    for(int i=v.size()-1;i>=0;i--){
        cout << v[i];
    }
    cout << endl;

}