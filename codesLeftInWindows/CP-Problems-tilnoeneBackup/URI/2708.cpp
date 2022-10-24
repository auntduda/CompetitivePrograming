#include <iostream>

using namespace std;

int main() {
    string e;
    int jipes = 0, turistas = 0, p;
    while(true){
        cin >> e >> p;
        if(e=="ABEND") break;
        
        if(e=="SALIDA"){
            jipes++;
            turistas+=p;
        } else{
            jipes--;
            turistas-=p;
        }
    }
    cout << turistas << endl << jipes << endl;
    
    return 0;
}