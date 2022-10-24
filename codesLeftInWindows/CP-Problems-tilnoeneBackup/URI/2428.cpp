#include <bits/stdc++.h>

using namespace std;

bool confere(int a, int b, int c, int d){
    return a * d == b * c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(confere(a, b, c, d) or confere(a, d, b, c) or confere(a, c, d, b)){
        cout << "S" << endl;
    } else{
        cout << "N" << endl;
    }
    
    return 0;
}