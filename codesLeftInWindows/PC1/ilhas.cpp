#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9+7;

int main(){
    int n, m, servidor, menor=9804365, maior=0, ilhaLonge=1, ondeEstou=1;

    scanf("%d %d", &n, &m);

    int ibo[n][n];
    int pings[n];
    bool passeiAqui[n];

    memset(ibo, INF, n*n*sizeof(int));
    memset(pings, INF, n*sizeof(int));
    memset(passeiAqui, false, n*sizeof(bool));


    for(int i=0; i<m; i++){
        int u, v, p;

        scanf("%d %d %d", &u, &v, &p);

        ibo[u][v] = p;
        ibo[v][u] = p;
    }

    scanf("%d", &servidor);

    for(int i=1; i<=n; i++){
        if(ibo[servidor][i]<menor){
            menor=ibo[servidor][i];
        }
        if(i!=servidor && ibo[servidor][i]>maior){
            ilhaLonge=i;
        }
    }

    for(int i=1; i<=n; i++){
        if(ibo[servidor][i]!=INF && i!=servidor){
            pings[i]+=ibo[servidor][i];
            ondeEstou=i;

            while(ondeEstou!=ilhaLonge){
                for(int j=1; j<=n; j++){
                    if(ibo[ondeEstou][j]!=INF && j!=servidor && !passeiAqui[j]){
                        if(pings[j]+ibo[ondeEstou][j]<pings[j]){
                            pings[j]+=ibo[ondeEstou][j];
                        }
                        passeiAqui[j]=true;
                        
                        ondeEstou=j;
                    }
                }
            }
            memset(passeiAqui, false, n*sizeof(bool));
        }
        
    }

    maior=pings[ilhaLonge];

    printf("%d\n", maior-menor);

    return 0;
}