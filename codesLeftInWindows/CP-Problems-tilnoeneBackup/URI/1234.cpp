#include <iostream>

using namespace std;

int main() {
    string sent;
    while(getline(cin, sent)){
        int k=0;
        for(int i=0;i<sent.size();i++){
            if(isalpha(sent[i])){
                if(k%2==0){
                    sent[i]=toupper(sent[i]);
                } else{
                    sent[i]=tolower(sent[i]);
                }
                k++;
            }
        }
        cout << sent << endl;
    }
    
    return 0;
}