#include <iostream>
#include <algorithm>

using namespace std;

bool pitagoras(int a, int b, int c){
    if(a*a + b*b == c*c) return true;
    return false;
}

int main(){
    int a, b, c, temp;
    while(cin >> a >> b >> c){
        if(b > a && b > c){
            temp = a;
            a = b;
            b = temp;
        } else if(c > a && c > b){
            temp = a;
            a = c;
            c = temp;
        }
        
        bool triplaP = false, triplaPP = false;
        
        
        if(a*a == b*b + c*c){
            triplaP = true;
            if(__gcd(__gcd(a, b), c) == 1) triplaPP = true;
        }
        
        if(triplaP){
            if(triplaPP) cout << "tripla pitagorica primitiva" << endl;
            else cout << "tripla pitagorica" << endl;
        } else cout << "tripla" << endl;

    }
    
    return 0;
}