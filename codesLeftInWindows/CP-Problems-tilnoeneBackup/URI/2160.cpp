#include <iostream>

using namespace std;

int main(){
    string ans;
    getline(cin, ans);
    
    if(ans.size() <= 80) cout << "YES" << endl;
    else cout << "NO" << endl;
}