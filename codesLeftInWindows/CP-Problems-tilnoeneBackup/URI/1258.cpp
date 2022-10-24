#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool ordenaCamisa(pair<char, string> a, pair<char, string> b){
    if(a.first==b.first){
        bool aP = true;
        string maior = a.second;
        string menor = b.second;
        if(menor.size()>maior.size()){
            maior = b.second;
            menor = a.second;
            aP = false;
        }
        for(int i=0;i<menor.size();i++){
            if(menor[i]<maior[i]){
                if(aP) return false;
                else return true;
            } else if(menor[i]>maior[i]){
                if(aP) return true;
                else return false;
            }
        }
        if(aP) return false;
        else return true;
    }
    return a.first>b.first;
}

int main(){
    int n, k=1;
    while(true){
        cin >> n;
        if(n==0) break;
        string nome, cor;
        char tam;
        vector<pair<char, string>> alunoB;
        vector<pair<char, string>> alunoV;
        
        for(int i=0;i<n;i++){
            cin.ignore();
            getline(cin, nome);
            cin >> cor >> tam;
            if(cor=="branco") alunoB.push_back(make_pair(tam, nome));
            else alunoV.push_back(make_pair(tam, nome));
        }
        sort(alunoB.begin(), alunoB.end(), ordenaCamisa);
        sort(alunoV.begin(), alunoV.end(), ordenaCamisa);
        
        if(k!=1) cout << endl;
        for(int i=0;i<alunoB.size();i++) cout << "branco " << alunoB[i].first << " " << alunoB[i].second << endl;
        for(int i=0;i<alunoV.size();i++) cout << "vermelho " << alunoV[i].first << " " << alunoV[i].second << endl;
        
        k++;
    }
    
    return 0;
}