#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k, i, j, cont=0;
    vector<int> lista;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &k);

        for(i=1; i<=n; i++){
            lista.push_back(i);
        }

        if((n-k==0 || n-k==1 || n-k<0) && k!= 0){
            printf("-1\n");
        }
        else{
            i=0;
            j=0;
        
            while(j<=k){
                int aux=lista[n-1];
                lista[n-1]=lista[n-1-i];
                lista[n-1-i]=aux;
                i=(2*i)+1;
                j++;
            }
                
            cont=0;
            for(i=1; i<n-1; i++){
                if(lista[i]>lista[i+1] && lista[i]>lista[i-1]){
                    cont++;
                }
            }

            if(cont==k){
                for(i=0; i<n; i++){
                    if(i==n-1){
                        printf("%d\n", lista[i]);
                    }
                    else{
                        printf("%d ", lista[i]);
                    }
                }
            }
            else{
                printf("-1\n");
            }

            lista.clear();            
        }
    }

    return 0;
}