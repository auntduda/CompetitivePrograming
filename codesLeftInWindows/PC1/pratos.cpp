#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, op, p, x, k;

    scanf("%d", &n);

    vector<long long int> pratos(n);

    //memset(pratos.begin(), 0, n*(sizeof(long long int)));

    for(int i=1; i<=n; i++){
        scanf("%lld", &pratos[i]);
    }

    long long int coloca[n];

    memset(coloca, 0, (n+1)*(sizeof(long long int)));

    scanf("%d", &m);

    while(m--){
        scanf("%d", &op);

        if(op==1){
            scanf("%d %d", &p, &x);

            if(pratos[p]<x || coloca[p]+x>pratos[p]){
                x=x-(pratos[p]-coloca[p]);
                coloca[p] += (pratos[p]-coloca[p]);
                p++;

                while(x>0){
                    x=x-(pratos[p]-coloca[p]);
                    coloca[p] += x;
                    p++;
                }
                //pratos[p+1]+=x-pratos[p];
            }
            else{
                coloca[p]+=x;
            }
        }
        else{
            scanf("%d", &k);

            printf("%lld\n", coloca[k]);
        }
        
        //for(int i=1; i<=n; i++){
        //    printf("o elemento da posicao %d no vetor coloca eh %lld\n", i, coloca[i]);
        //}
    }

    return 0;
}