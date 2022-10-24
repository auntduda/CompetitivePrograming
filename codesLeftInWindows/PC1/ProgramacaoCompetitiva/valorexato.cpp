#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, soma=0, j=0;
    bool flag=false;

    scanf("%d %d", &n, &m);

    queue<int> livros;
    int ans[2];

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);

        livros.push(aux);
    }

    sort(livros, livros+livros.size());

    int i=0;

    while(!flag){
        soma += livros[i];

        if(soma>m){
            soma -= livros[i];

            ans[j] = 0;
            j--;
            livros.pop();
            i--;
        }
        else if(soma==m){
            ans[j] = livros[i];
            flag=true;
        }
        else if(soma<m){
            ans[j] = livros[i];
            j++;
            i++;
        }
    }

    printf("%d %d\n", ans[0], ans[1]);

    return 0;
}