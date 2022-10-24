#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v[17], a, b;
    cin >> a >> b;
    
    if((a <= 8 && b >= 9) or (b <= 8 && a >= 9)){
        cout << "final" << endl;
    } else if((a % 2 == 0 && b == a-1) or (b % 2 == 0 && a == b-1)){
        cout << "oitavas" << endl;
    } else if((a <= 12 && b >= 13) or (a >= 13 && b <= 12) or (a <= 4 && b >= 5) or (a >= 5 && b <= 4)){
        cout << "semifinal" << endl;
    } else{
        cout << "quartas" << endl;
    }
    
    return 0;
}