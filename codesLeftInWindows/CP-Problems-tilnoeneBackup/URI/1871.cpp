#include <iostream>

using namespace std;

int main() {
    int n, m;
    while(true){
        cin >> n >> m;
        if(n==0 and m==0){
            break;
        }
        string num = to_string(n+m), res="";
        for(int i=0;i<num.size();i++){
            if(num[i]!='0'){
                res+=num[i];
            }
        }
        cout << res << endl;
    }
    
    return 0;
}