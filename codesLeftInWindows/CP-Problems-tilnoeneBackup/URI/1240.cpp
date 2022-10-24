#include <iostream>

using namespace std;

int main(){
    int n;
    string num1, num2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num1 >> num2;
        int v=0;
        for(int j=0;j<num2.size();j++){
            if(num1[num1.size()-num2.size()+j]!=num2[j]){
                v=-1;
                break;
            }
        }
        if(v==0){
            cout << "encaixa" << endl;
        } else{
            cout << "nao encaixa" << endl;
        }

    }

    return 0;
}