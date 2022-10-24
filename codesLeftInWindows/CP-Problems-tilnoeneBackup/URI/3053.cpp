#include <iostream>

using namespace std;

void troca(int pos[3], int a, int b){
    int temp;
    temp = pos[a];
    pos[a] = pos[b];
    pos[b] = temp;
}

int main() {
    int n, pos[3] = {}, mov;
    char c;
    cin >> n >> c;
    pos[int(c)-65] = 1;
    for(int i=0;i<n;i++){
        cin >> mov;
        if(mov==1) troca(pos, 0, 1);
        else if(mov==2) troca(pos, 1, 2);
        else troca(pos, 0, 2);
    }
    for(int i=0;i<3;i++){
        if(pos[i]==1) cout << char(65+i) << endl;
    }
 
    return 0;
}