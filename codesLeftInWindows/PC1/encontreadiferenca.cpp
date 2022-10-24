#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main(){
    int n;
    lli k;

    scanf("%d %lld", &n, &k);

    vector<lli> a (n);


    for(int i=0; i<n; i++){
        scanf("%lld", &a[i]);
    }
    
    vector<lli> aCopia = a;

    for(int i=0; i<n; i++){
        printf("vetor a: %lld | vetor aCopia: %lld\n", a[i], aCopia[i]);
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        lli falta = a[i] - k;

        int achei = *lower_bound(a.begin(), a.end(), falta);
        int pos = lower_bound(a.begin(), a.end(), falta) - a.begin();

        if(i!=pos){
            if(a[i]-achei==k){
                int ansi = lower_bound(aCopia.begin(), aCopia.end(), a[i]) - aCopia.begin();
                int ansj = lower_bound(aCopia.begin(), aCopia.end(), falta) - aCopia.begin();

                printf("Sim\n%d %d\n", ansi, ansj);
                return 0;
            }
        }
    }

    printf("Nao\n");

    return 0;
}