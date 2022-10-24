#include <iostream>

using namespace std;

int main(){
    long long int n;
    char val[6]={'A','B','C','D','E','F'};
    string res="";
    cin >> n;
    while(n>=16){
        if(n/16>9){
            res+=val[n/16-10];
        } else{
            res+=to_string(n/16);
        }
        n%=16;
    }
    if(n%16>9){
        res+=val[n-10];
    } else{
        res+=to_string(n);
    }
    cout << res << endl;

    return 0;
}