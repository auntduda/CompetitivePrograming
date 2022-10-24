#include <iostream>

using namespace std;

string descriptografa(string pal){
    string res = "";
    
    for(int i = 0; i < pal.size(); i++){
        if(islower(pal[i])) res += pal[i];
    }
    
    return res;
}

int main(){
    int n;
    cin >> n;
    string pal, res;
    
    while(n--){
        cin >> pal;
        
        res = descriptografa(pal);
        
        for(int i = res.size()-1; i >= 0; i--){
            cout << res[i];
        }
        
        cout << endl;
    }
    
    return 0;
}