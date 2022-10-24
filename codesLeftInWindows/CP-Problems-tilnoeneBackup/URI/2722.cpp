#include <iostream>

using namespace std;

void descriptografa(string a, string b){
    string res = "";
    
    for(int i = 0; i < a.size(); i += 2){
        cout << a[i] << a[i+1] << b[i];
        
        if(i < b.size() - 1) cout << b[i+1];
    }
    
    cout << endl;

}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string nome1, nome2;
        
        getline(cin, nome1);
        getline(cin, nome2);

        descriptografa(nome1, nome2);
        
    }
    
    return 0;
}