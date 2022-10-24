#include <iostream>

using namespace std;

int main() {
    int n[9], soma=0;
    for(int i=0;i<9;i++){
        cin >> n[i];
		soma+=n[i];
    }
    string renas[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    
    soma%=9;
    if(soma-1<0){
        soma=9;
    }
	cout << renas[soma-1] << endl;
	
    return 0;
}
