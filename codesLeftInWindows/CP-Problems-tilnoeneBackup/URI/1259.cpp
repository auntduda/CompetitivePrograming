#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, v;
    cin >> n;
    vector<int> par, impar;
    
    for(int i=0;i<n;i++){
        cin >> v;
        if(v%2==0){
            par.push_back(v);
        } else{
            impar.push_back(v);
        }
       
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end(), greater<int>());
    for(int i=0;i<par.size();i++){
        cout << par[i] << endl;
    }
    for(int i=0;i<impar.size();i++){
        cout << impar[i] << endl;
    }
    
    return 0;
}