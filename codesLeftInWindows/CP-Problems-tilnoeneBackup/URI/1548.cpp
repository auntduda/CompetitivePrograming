#include <iostream>
#include <algorithm>

using namespace std;

struct aluno{
    int pos, nota;
};

bool ordenaFila(aluno a, aluno b){
    return a.nota>b.nota;
}

int main() {
    int n, m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        aluno a[m], v[m];
        int nota, iguais=0;
        for(int j=0;j<m;j++){
            cin >> nota;
            a[j].pos=j;
            a[j].nota=nota;
            v[j].pos=j;
            v[j].nota=nota;
        }
        sort(v, v+m, ordenaFila);
        for(int j=0;j<m;j++)
            if(a[j].pos==v[j].pos) iguais++;
        cout << iguais << endl;
    }
    
    return 0;
}