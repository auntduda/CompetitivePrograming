#include <iostream>

using namespace std;

int main(){
    string t;
    getline(cin ,t);
    if(t.size()>140){
        cout << "MUTE" << endl;
    } else{
        cout << "TWEET" << endl;
    }

    return 0;
}