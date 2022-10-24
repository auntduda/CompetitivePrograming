#include <iostream>

using namespace std;

int main(){
    int n, m, ter[1024][1024];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> ter[i][j];
        }
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(ter[i][j]==42 && ter[i-1][j-1]==7 && ter[i-1][j]==7 && ter[i-1][j+1]==7 && ter[i][j-1]==7 && ter[i][j+1]==7 && ter[i+1][j-1]==7 && ter[i+1][j]==7 && ter[i+1][j+1]==7){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    cout << "0 0" << endl;

    return 0;
}