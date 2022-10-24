#include<bits/stdc++.h>

using namespace std;

vector<int> a;

bool dp(int soma, int i){
    if(i==a.size()){
        return soma%360==0;
    }

    return dp(soma+a[i], i+1) || dp(soma-a[i], i+1);
}

int main(){
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int aux;
        scanf("%d", &aux);

        a.push_back(aux);
    }

    printf("%s\n", dp(0, 0) ? "YES" : "NO");

    return 0;
}