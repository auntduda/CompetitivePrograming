#include<bits/stdc++.h>

using namespace std;

int n;
int l=0, r=n-1;

int BS(long long int elem, long long int *vetA){
    int mid = (l+r)/2;

    while(l<=r && mid != r){
        if(vetA[mid] >= elem){
            if(vetA[mid] == elem){
                return mid+1;
                //printf("entrei !\n");
            }
            else{
                return mid;
            }
        }
        else{
            l=mid+1;
            //int posicao = BS(elem, vetA);

            //return posicao;
        }
    }
    
    return 0;
}

int main(){
    int m;

    scanf("%d %d", &n, &m);

    long long int vetorA[n], vetorB[m];

    for(int i=0; i<n; i++){
        scanf("%lld", &vetorA[i]);
    }

    sort(vetorA, vetorA+n);

    for(int i=0; i<m; i++){
        scanf("%lld", &vetorB[i]);

        printf("%d ", BS(vetorB[i], vetorA));
    }

    return 0;
}