#include <iostream>

using namespace std;

int main() {
    int n, d;
    while(cin >> n){
        cin >> d;
        string data, res = "";
        int p;
        bool todos;
        for(int i=0;i<d;i++){
            cin >> data;
            todos = true;
            for(int j=0;j<n;j++){
                cin >> p;
                if(p==0) todos = false;
            }
            if(todos && res=="") res=data;
        }
        if(res!="") cout << res << endl;
        else cout << "Pizza antes de FdI" << endl;
        
    }
    
    return 0;
}