#include <iostream>

using namespace std;

int main(){
    int n, caso=1, num, i;
    string res;
    while(cin >> n){
        res="";
        num=1;
        res+="0";
        if(n!=0){
            res+=" ";
            for(int i=1;i<=n;i++){
                for(int j=0;j<i;j++){
                    res+=to_string(i);
                    if(not (i==n and j==i-1)){
                        res+=" ";
                    }
                    num++;
                }
            }
        }

        cout << "Caso " << caso << ": " << num << " numero";
        if(num>1){
            cout << "s";
        }
        cout << endl;
        cout << res << endl;
        cout << endl;
        caso++;
    }

    return 0;
}