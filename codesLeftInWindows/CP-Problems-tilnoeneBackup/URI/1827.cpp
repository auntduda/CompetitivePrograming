#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==(n-1)/2 and i==(n-1)/2){
                    cout << 4;
                } else if((i>=n/3 and j>=n/3) and (i<n-n/3 and j<n-n/3)){
                    cout << 1;
                }else if(i==j){
                    cout << 2;
                } else if(j==n-1-i){
                    cout << 3;
                } else{
                    cout << 0;
                }
                if(j==n-1){
                    cout << endl;
                }

            }
        }
        cout << endl;
    }

    return 0;
}