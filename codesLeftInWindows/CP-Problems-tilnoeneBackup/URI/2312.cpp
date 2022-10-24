#include <iostream>
#include <algorithm>

using namespace std;

struct pais{
    string nome;
    int ouro, prata, bronze;
};

bool ordenaMedalhas(pais a, pais b){
    if(a.ouro == b.ouro){
        if(a.prata == b.prata){
            if(a.bronze == b.bronze){
                return a.nome < b.nome;
            }
            
            return a.bronze > b.bronze;
        }
        
        return a.prata > b.prata;
    }
    
    return a.ouro > b.ouro;
}

int main(){
    int n;
    cin >> n;
    pais paises[510];
    for(int i = 0; i < n; i++)
        cin >> paises[i].nome >> paises[i].ouro >> paises[i].prata >> paises[i].bronze;
    
    sort(paises, paises+n, ordenaMedalhas);
    
    for(int i = 0; i < n; i++) 
        cout << paises[i].nome << " " << paises[i].ouro << " " << paises[i].prata << " " <<  paises[i].bronze << endl;
    
    return 0;
}