#include <iostream>

using namespace std;

int main(){
    int n, i, j, x, y, soma;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x >> y;
        if(x%2==0){
            x++;
        }
        soma=0;
        for(j=0;j<y;j++){
            soma+=x;
            x+=2;
        }
        cout << soma << endl;
    }

    return 0;
}