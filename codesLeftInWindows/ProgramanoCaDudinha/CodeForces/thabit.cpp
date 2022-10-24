#include<bits/stdc++.h>

using namespace std;

//long long int primo[100000001];

int primo(long long int n) {
    if(n == 1) return 0;
    for(long long int a = 2; a*a <= n; a++) {
        if(n % a == 0){
            return 0;
        }
    }

    return 1;
}

/*int crivo(int n){
    vector<long long int> primo(n);

    for(int i=1; i<=n; i++){
        primo[i] = -1;
    }

    for(int i=2; i<=n; i++){
        if(primo[i] == -1){
            primo[i] = 1;

            for(int j=i+i; j<=n; j+=i){
                primo[j] = 0;
            }
        }
    }

    if(primo[n] == 1){
        return 1;
    }
    else{
        return 0;
    }
}*/

int thabit(long long int n){
    double res = log2((n+1.0)/3.0);

    if(res - ((int) res) == 0){

        //printf("o resultado ta dando %lf\n", res);
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    long long int n, p, t;

    scanf("%lld", &n);

    p = primo(n);
    t = thabit(n);

    if(p&t){
        printf("TP\n");
    }
    else if(p){
        printf("P\n");
    }
    else if(t){
        printf("T\n");
    }
    else{
        printf("C\n");
    }

    return 0;

}