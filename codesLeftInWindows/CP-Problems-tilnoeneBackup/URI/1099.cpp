#include <iostream>

using namespace std;

int main(){
    int n, x, y, si, temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        si=0;
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }

        if(x%2==0){
            x++;
        } else{
            x+=2;
        }
        for(int j=x;j<y;j+=2){
            si+=j;
        }
        cout << si << endl;
    }

    return 0;
}