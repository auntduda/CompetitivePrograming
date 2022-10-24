#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, berries, size[26];

    char tab[6][6];

    memset(tab, 0, 36*sizeof(char));

    scanf("%d %d", &m, &n);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%c", &tab[i][j]);

            if(tab[i][j] == '*'){
                berries++;
            }
        }
    }

    for(int i=0; i<26; i=i+berries){
        ans=i;
    }

    printf("%d\n", ans);

    return 0;
}