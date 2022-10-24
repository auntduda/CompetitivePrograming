#include <iostream>

using namespace std;

int main(){
    int idade;
    cin >> idade;

    cout << idade/365 << " ano(s)\n" << (idade%365)/30 << " mes(es)\n" << (idade%365)%30 << " dia(s)\n";

    return 0;
}
