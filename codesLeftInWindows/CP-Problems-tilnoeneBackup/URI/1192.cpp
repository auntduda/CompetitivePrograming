#include <iostream>

using namespace std;

int main(){
    int n;
    string caso;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> caso;
        if(caso[0]==caso[2]){
            cout << (int(caso[0])-48)*(int(caso[2])-48) << endl;
        } else if(int(caso[1])>=97 and int(caso[1])<=122){
            cout << (int(caso[0])-48)+(int(caso[2])-48) << endl;
        } else{
            cout << (int(caso[2])-48)-(int(caso[0])-48) << endl;
        }
    }

    return 0;
}