#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int q = a/b, r = a%b;
    
    if(r<0){
        if(q<0) q--;
        else if(q>0) q++;
        else{
            if(a-((q-1)*b)>=0){
                q--;
            } else{
                q++;
            }
        }
        r = a-(q*b);
    }
    
    cout << q << " " << r << endl;
    
    return 0;
}