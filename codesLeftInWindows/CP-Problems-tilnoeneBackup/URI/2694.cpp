#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string txt, num="";
        cin >> txt;
        int soma=0;
        bool seq = false;
        for(int j=0;j<txt.size();j++){
            if(isdigit(txt[j])){
                num+=txt[j];
            } else{
                if(num.size()>0){
                    soma+=stoi(num);
                    num="";
                }
            }
            if(j==txt.size()-1 and num.size()>0){
                soma+=stoi(num);
            }
        }
        cout << soma << endl;
    }
    
    return 0;
}