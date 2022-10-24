#include <bits/stdc++.h>

using namespace std;

int main(){
    map <char, int> teclas = {{'1', 1}, {'7', 7}, {'8', 8}, {'9', 9}, {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7}, {'T', 8}, {'U', 8}, {'V', 8}, {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}};
    
    int c = 1, atual = 2;
    for(int i = 65; i <= 65+15; i++){
        teclas[char(i)] = atual;
        teclas[tolower(char(i))] = atual;
        c++;
        if(c == 4){
            c = 1;
            teclas[char(atual)+48] = atual;
            atual++;
        }
    }
    teclas['1'] = 1;
    
    char frase[1000024];
    while(scanf(" %[^\n]s", frase) != EOF){
        for(int i = 0; i < strlen(frase); i++){
            if(frase[i] == '*' or frase[i] == '#')
                cout << frase[i];
            else if(isalpha(frase[i]) or isdigit(frase[i]))
                cout << teclas[toupper(frase[i])];
        }
        cout << endl;
    }
    
    return 0;
}