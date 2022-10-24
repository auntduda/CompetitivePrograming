//sim, esse codigo esta IGUALZINHO ao do professor vinicius,
//quando ele resolveu a questao em aula
//Peco perdao, mas nao consegui mesmo resolver a questao sozinha :(

//DFS on backtracking - URI 1153

#include<bits/stdc++.h>

using namespace std;

map<string, bool> passei

void sequencias(string palavra){
    passei[palavra] = true;

    for(int i=0; i<palavra.size(); i++){
        char tira = palavra[i];
        palavra.erase(i, 1);

        if(palavra.size()>0 && !passei.count(palavra)){
            sequencias(palavra);
        }

        palavra.insert(i, 1, tira);
    }
}

int main(){
    string s;

    cin >> s;

    sequencias(s);

    for(auto& p: passei){
        cout << p.first << endl;
    }

    return 0;
}