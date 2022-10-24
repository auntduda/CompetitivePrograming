#include <bits/stdc++.h>
#define ff first
#define ss second
#define endl '\n'

// n acho que eu seja bom, mas eu ja fui pior

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

const int oo = 1e9;
const ll OO = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;

bool solve(stack<int> s, int n) {
    stack<int> ori;
    
    for (int i = 1; i <= n; i++)
        ori.push(i);
    
    stack<int> tmp;
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
            
        if (curr == ori.top()) {
            ori.pop();
        } else {
            while (!tmp.empty()) {
                if (tmp.top() == ori.top()) {
                    ori.pop();
                    tmp.pop();
                } else
                    break;
            }
            
            tmp.push(curr);
        }
    }
    
    while (!tmp.empty()) {
        if (tmp.top() == ori.top()) {
            ori.pop();
            tmp.pop();
        } else {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n) {
        if (n == 0) break;
        
        while (true) {
            int v;
            stack<int> s;
            
            cin >> v;
            if (v == 0) break;
            
            s.push(v);
            for (int i = 1; i < n; i++) {
                cin >> v;
                s.push(v);
            }
            
            if (solve(s, n))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}