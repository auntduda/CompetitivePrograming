#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, m[210][210], tot = 0, a, b;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> m[i][j];
    
    map<int, bool> butt;
    
    for(int i = 0; i < n*2; i++){
        cin >> a >> b;
        
        if(!butt[m[a-1][b-1]]){
            tot++;
            butt[m[a-1][b-1]] = true;
        }      
        
    }
    
    cout << tot << endl;
    
    return 0;
}