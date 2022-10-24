#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t, menor, pos;
    for(int i=0;i<n;i++){
        cin >> t;
        if(i==0){
            menor=t;
            pos=1;
        }  else{
            if(t<menor){
                menor=t;
                pos=i+1;
            }
        }
    }
    cout << pos << endl;
	
    return 0;
}