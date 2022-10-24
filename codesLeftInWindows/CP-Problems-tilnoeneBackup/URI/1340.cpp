#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> filap;
        
        int op, v, op1 = 0, op2 = 0, op3 = 0, nop = 0;
        
        for(int i = 0; i < n; i++){
            cin >> op >> v;
            
            if(op == 1){
                
                pilha.push(v);
                fila.push(v);
                filap.push(v);
                
            } else{
                nop++;
                
                if(pilha.top() == v) op1++;
                if(fila.front() == v) op2++;
                if(filap.top() == v) op3++;
                
                pilha.pop();
                fila.pop();
                filap.pop();
                
            }
        }
        
        //cout << op1 << " " << op2 << " " << op3 << endl;
        
        if(op1 != nop && op2 != nop && op3 != nop){
            cout << "impossible" << endl;
        } else if(op1 == nop && op2 != nop && op3 != nop){
            cout << "stack" << endl;
        } else if(op1 != nop && op2 == nop && op3 != nop){
            cout << "queue" << endl;
        } else if(op1 != nop && op2 != nop && op3 == nop){
            cout << "priority queue" << endl;
        } else{
            cout << "not sure" << endl;
        }
        
    }
    
    return 0;
}