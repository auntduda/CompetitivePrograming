#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    int l[610] = {};
    
    for(int i = 0; i < 3; i++){
        cin >> a;
    
        for(int i = a; i < a+200; i++)
            l[i] = 1;
    }
    
    int qnt = 0;
    for(int i = 0; i < 600; i++){
        if(l[i] == 0){
            qnt++;
        }
    }
    
    cout << qnt*100 << endl;
    
    return 0;
}