#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;
    
int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        string planet;
        int a, b;
        
        pair<int, string> planets[2200];
        for(int i = 0; i < n; i++){
            cin >> planet >> a >> b;
            planets[i] = make_pair(a-b, planet);
        }
        
        sort(planets, planets+n);
        
        cout << planets[0].second << endl;
    }
    
    return 0;
}