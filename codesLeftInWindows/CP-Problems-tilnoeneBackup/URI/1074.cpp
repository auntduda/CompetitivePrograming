#include <iostream>

using namespace std;

int main(){
    int n, i;
    long int x;
    string resposta;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        resposta="";
        if(x==0){
            cout << "NULL";
        } else{
            if(x%2==0){
                resposta+="EVEN ";
            } else{
                resposta+="ODD ";
            }
            if(x>0){
                resposta+="POSITIVE";
            } else{
                resposta+="NEGATIVE";
            }
        }
        cout << resposta << endl;
    }

    return 0;
}