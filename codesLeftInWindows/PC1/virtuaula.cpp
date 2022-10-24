#include<bits/stdc++.h>

using namespace std;

#define plli pair<long long int, long long int>
#define lli long long int

int n,m;
vector<plli> xadrez;
vector<plli> programacao;

bool ordenaSecond(plli a, plli b){
    return a.second < b.second;
}

int intervalo(){

    vector<plli> copiaXadrez = xadrez;
    vector<plli> copiaProgramacao = programacao;


    sort(xadrez.begin(), xadrez.end());
    sort(programacao.begin(), programacao.end(), ordenaSecond);
    sort(copiaXadrez.begin(), copiaXadrez.end(), ordenaSecond);
    sort(copiaProgramacao.begin(), copiaProgramacao.end());
    
    /*for(int i=0; i<n; i++){
            printf("xadrez: %lld %lld\n", xadrez[i].first, xadrez[i].second);
    }

    for(int i=0; i<m; i++){
        printf("programacao: %lld %lld\n", programacao[i].first, programacao[i].second);
    }

    for(int i=0; i<n; i++){
        printf("copiaXadrez: %lld %lld\n", copiaXadrez[i].first, copiaXadrez[i].second);
    }

    for(int i=0; i<m; i++){
        printf("copiaProgramacao: %lld %lld\n", copiaProgramacao[i].first, copiaProgramacao[i].second);
    }*/

    lli comeco1 = xadrez[n-1].first;
    lli termino1 = programacao[0].second;
    lli termino2 = copiaXadrez[0].second;
    lli comeco2 = copiaProgramacao[m-1].first;


    lli ans1 = comeco1-termino1;
    lli ans2 = comeco2-termino2;
    //printf("%lld\n%lld\n%lld\n%lld\n", ans1, ans2, ans3, ans4);

    return max(ans1, ans2);
}

int main(){

    scanf("%d", &n);


    for(int i=0; i<n; i++){
        lli aux1, aux2;
        scanf("%lld %lld", &aux1, &aux2);

        xadrez.push_back(make_pair(aux1, aux2));
    }

    scanf("%d", &m);


    for(int i=0; i<m; i++){
        lli aux1, aux2;
        scanf("%lld %lld", &aux1, &aux2);

        programacao.push_back(make_pair(aux1, aux2));
    }

    lli ans = intervalo();

    printf("%lld\n", ans<0 ? 0 : ans);

    return 0;
}