#include <bits/stdc++.h>

using namespace std;

bool dentro(int x, int y, int a, int b){
    if(x <= a && y <= b) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a1, b1, a2, b2, a, b;
    cin >> a1 >> b1 >> a2 >> b2 >> a >> b;
    
    int c1x = b1 + a2;
    int c1y = min(a1, b2);
    
    //casos triviais
    if(dentro(a, b, a1, b1) or dentro(b, a, a1, b1) or dentro(a, b, a2, b2) or dentro(b, a, a2, b2)){
        cout << 'S' << endl;
        return 0;
    } else if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)){
        cout << 'S' << endl;
        return 0;
    } else{
        c1x = a1 + b2;
        c1y = min(b1, a2);
        
        if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)){
            cout << 'S' << endl;
            return 0;
        }
        
        c1x = a1 + a2;
        c1y = min(b1, b2);
        
        if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)){
            cout << 'S' << endl;
            return 0;
        }
        
        c1x = b1 + b2;
        c1y = min(a1, a2);
        
        if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)){
            cout << 'S' << endl;
            return 0;
        }
        
    }
    
    cout << 'N' << endl;
    
    return 0;
}