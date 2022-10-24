#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool organizar(string a, string b){
    int menor = min(a.size(), b.size());
    for(int i=0;i<menor;i++){
        if(tolower(a[i])>tolower(b[i])){
            return true;
        } else if(tolower(a[i])<tolower(b[i])){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> nomes;
    string pal;
    while(getline(cin, pal)){
        nomes.push_back(pal);
    }
    sort(nomes.begin(), nomes.end(), organizar);

    cout << nomes[0] << endl;
    
    return 0;
}