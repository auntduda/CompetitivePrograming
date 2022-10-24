#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string txt;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, txt);
        for(int j=(txt.size()-1)/2;j>=0;j--) cout << txt[j];
        for(int j=txt.size()-1;j>(txt.size()-1)/2;j--) cout << txt[j];
        cout << endl;
    }
    
    return 0;
}