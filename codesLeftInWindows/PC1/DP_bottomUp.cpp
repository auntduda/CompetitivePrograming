#include<bits/stdc++.h>

using namespace std;

string s;
set<string> vetor;

void sequencias(int i, string palavra){
    if(i == s.size()){
        vetor.insert(palavra);

        return;
    }
    else{
        //pega o caractere da string s
        sequencias(i+1, palavra+s[i]);

        //nao pega o caractere da string s
        sequencias(i+1, palavra);
    }
}

int main(){

    cin >> s;

    sequencias(0, "");

    for(string p: vetor){
        cout << p << endl;
    }

    return 0;
}