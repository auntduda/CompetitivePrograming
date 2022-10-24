#include <iostream>

using namespace std;

int ctoi(char n){ return int(n)-48;}

int main(){
    string a, b;
    
    while(true){
        cin >> a >> b;
        
        if(a == "0" && b == "0") break;
        
        if(stoi(b) > stoi(a)){
            string temp = a;
            a = b;
            b = temp;
        }
        
        int i, qtCarry = 0, carry = 0;
        
        for(i = 1; i <= b.size(); i++){
            int posa = a.size()-i, posb = b.size()-i;
            
            int sum = carry + ctoi(a[posa]) + ctoi(b[posb]);
            
            if(sum > 9){
                carry = sum/10;
                qtCarry++;
            } else carry = 0;
            
        }
        
        while(carry > 0){
            int sum = carry;

            if(i <= a.size())
                sum = carry + ctoi(a[a.size()-i]);
            
            if(sum > 9){
                carry = sum/10;
                qtCarry++;
            } else carry = 0;
            
            i++;
        }
        
        if(qtCarry == 0) cout << "No carry operation." << endl;
        else if(qtCarry == 1) cout << "1 carry operation." << endl;
        else cout << qtCarry << " carry operations." << endl;
        
    }
    
    return 0;
}