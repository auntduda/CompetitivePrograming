#include <iostream>

using namespace std;

int factorial[16] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int ctoi(char n){ return int(n)-48;}

int acm(string n){
    int res = 0;
    
    for(int i = n.size(); i >= 1; i--)
        res += factorial[i]*ctoi(n[n.size()-i]);
    
    
    return res;
}

int main(){
    string n;
    factorial[0] = 1;
    
    while(true){
        cin >> n;
        if(n == "0") break;
        
        cout << acm(n) << endl;
    }
    
    return 0;
}