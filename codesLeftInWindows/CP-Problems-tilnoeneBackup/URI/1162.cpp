#include <iostream>

using namespace std;

int main() {
    int n, l;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l;
        int v[l], cnt=0;
        for(int j=0;j<l;j++) cin >> v[j];
        bool troca = true;
        while(troca){
            troca = false;
            for(int j=0;j<l-1;j++){
                if(v[j]>v[j+1]){
                    int temp = v[j];
                    v[j]=v[j+1];
                    v[j+1] = temp;
                    troca=true;
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
        
    }
}