#include <iostream>

using namespace std;

int main(){
    int j[3];
    
    while(cin >> j[0]){
        int zeros = 0, uns = 0;
        if(j[0] == 0) zeros++;
        else uns++;
        
        for(int i = 1; i < 3; i++){
            cin >> j[i];
            if(j[i] == 0) zeros++;
            else uns++;
        }
        
        if(zeros == 1){
            for(int i = 0; i < 3; i++){
                if(j[i] == 0){
                    cout << char(i+65) << endl;
                    break;
                }
            }
        } else if(uns == 1){
            for(int i = 0; i < 3; i++){
                if(j[i] == 1){
                    cout << char(i+65) << endl;
                    break;
                }
            }
        } else cout << '*' << endl;
        
    }
    
    return 0;
}