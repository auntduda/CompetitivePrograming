#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, v;
    cin >> n;
    
    map<int, int> m;
    stack<int> s;
    string op;
    for(int i = 0; i < n; i++){
        cin >> op;
        if(op == "PUSH"){
            cin >> v;
            m[v]++;
            s.push(v);
        } else if(op == "POP"){
            if(!s.empty()){
                v = s.top();
                s.pop();
                m[v]--;
                if(m[v] == 0){
                    m.erase(v);
                }
            } else{
                cout << "EMPTY" << endl;
            }
        } else{
            if(!s.empty()){
                cout << m.begin()->first << endl;
            } else{
                cout << "EMPTY" << endl;
            }
        }
    }
    
    return 0;
}