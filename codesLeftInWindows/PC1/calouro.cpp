#include<bits/stdc++.h>

using namespace std;

char unb[2200][2200], passei[2200][2200];
int flag[2200][2200], n;

int caminho(int saidaI, int saidaJ, char cam){
    passei[saidaI][saidaJ] = '*';

    if(unb[saidaI][saidaJ] == 'a') return 1;

    switch(cam){
        case 'C':
            saidaI=saidaI-1;

            if(unb[saidaI][saidaJ] == 'a' || flag[saidaI][saidaJ] == 1)
                return 1;
            else if(flag[saidaI][saidaJ] == 0)
                return 0;

            if(passei[saidaI][saidaJ] != '*')
                return caminho(saidaI, saidaJ, unb[saidaI][saidaJ]);
            else
                return 0;
            
        case 'B':
            saidaI=saidaI+1;

            if(unb[saidaI][saidaJ] == 'a' || flag[saidaI][saidaJ] == 1)
                return 1;
            else if(flag[saidaI][saidaJ] == 0)
                return 0;
            
            if(passei[saidaI][saidaJ] != '*')
                return caminho(saidaI, saidaJ, unb[saidaI][saidaJ]);
        case 'D':
            saidaJ=saidaJ+1;

            if(unb[saidaI][saidaJ] == 'a' || flag[saidaI][saidaJ] == 1)
                return 1;
            else if(flag[saidaI][saidaJ] == 0)
                return 0;

            
            if(passei[saidaI][saidaJ] != '*')
                return caminho(saidaI, saidaJ, unb[saidaI][saidaJ]);
        case 'E':
            saidaJ=saidaJ-1;

            if(unb[saidaI][saidaJ] == 'a' || flag[saidaI][saidaJ] == 1)
                return 1;
            else if(flag[saidaI][saidaJ] == 0)
                return 0;

            
            if(passei[saidaI][saidaJ] != '*')
                return caminho(saidaI, saidaJ, unb[saidaI][saidaJ]);
    }

    return 0;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    memset(unb, 'a', (n+1)*(n+1)*sizeof(char));
    memset(passei, 'b', (n+1)*(n+1)*sizeof(char));
    memset(flag, -1, (n+1)*(n+1)*sizeof(int));


    /*for(int i=1; i<=n; i++){
        string temp;

        cin >> temp;

        unb[i] = "a" + temp;
    }*/

    /*for(int i=0; i<n; i++){
        unb[0][i]='a';
        unb[i][0]='a';
        unb[n+1][i]='a';
        unb[i][n+1]='a';
    } */

    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if(i==0 || j==0 || i==n+1 || j==n+1){
                unb[i][j] = 'a';
            }
            else{
                scanf("%c", &unb[i][j]);
            }
        }
    }


    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=n+1; j++){
            if(j==n+1){
                cout << unb[i][j] << endl;
            }
            else{
                cout << unb[i][j];
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            flag[i][j] = caminho(i, j, unb[i][j]);

            memset(passei, 'b', n*n*sizeof(int));
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==n){
                cout << flag[i][j] << endl;
            }
            else{
                cout << flag[i][j];
            }
        }
    }

}