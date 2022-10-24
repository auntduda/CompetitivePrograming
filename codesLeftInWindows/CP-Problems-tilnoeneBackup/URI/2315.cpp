#include <iostream>

using namespace std;

int main(){
    int di, mi, df, mf, dtot = 0;
    cin >> di >> mi >> df >> mf;
    
    int mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(mi == mf) 
        dtot = df - di;
    else{
        dtot += mes[mi]-di + df;
        for(int i = mi + 1; i < mf; i++)
            dtot += mes[i];
            
    }
    
    cout << dtot << endl;
    
    return 0;
}