#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string l, res = "";
        cin >> l;
        
        if(l[0] == 'R' && l[1] == 'A' && l.size() == 20){
            bool deszerou = false;
            for(int j = 2; j < l.size(); j++){
                if(l[j] != '0')
                    deszerou = true;

                if(deszerou) res += l[j];    
            }
            cout << res << endl;
            
        } else cout << "INVALID DATA" << endl;
    }

}