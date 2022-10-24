#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n, r, id;
    
    while(cin >> n){
        cin >> r;
        map<int, bool> merg;
        
        for(int i = 0; i < r; i++){
            cin >> id;
            merg[id] = true;
        }
        
        vector<int> morreram;
        
        for(int i = 1; i <= n; i++){
            if(!merg[i]) morreram.push_back(i);
        }
        
        if(morreram.size() == 0) cout << '*';
        else{
            for(int i = 0; i < morreram.size(); i++) cout << morreram[i] << " ";
        }
        
        cout << endl;   
    }
    
    return 0;
}