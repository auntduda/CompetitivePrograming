#include <iostream>

using namespace std;

int main() {
    for(int i=0;i<39;i++){
        cout << "-";
    }
    cout << endl;
    string pal[3] = {"Roberto", "5786", "UNIFEI"};
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<39;j++){
            if(j==0 or j==38){
                cout << "|";
            }else if(i%2==0){
                if(j==9){
                    cout << pal[c];
                    j+=pal[c].size()-1;
                    c++;
                } else{
                    cout << " ";
                }
            } else{
                cout << " ";
            }
        }
        cout << endl;
        
    }
    
    for(int i=0;i<39;i++){
        cout << "-";
    }
    cout << endl;
    
    return 0;
}