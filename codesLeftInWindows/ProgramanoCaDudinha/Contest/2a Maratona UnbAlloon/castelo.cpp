#include<bits/stdc++.h>

using namespace std;

int dp()

int main(){
    int n;
    long long int dano=0;

    scanf("%d", &n);

    vector<long long int> defense(n);

    for(int i=0; i<n; i++){
        int aux;

        scanf("%d", &aux);

        defense[i] = aux;
    }

    while(defense.size() != 0){
        dano += defense[0]+defense[defense.size()-1];

        if(defense.size() == 1){
            dano -= defense[0];
        }

        if(defense[1]+defense[defense.size()-1] > defense[0]+defense[defense.size()-2]){
            defense.pop_back();
        }
        else{
            defense.erase(defense.begin());
        }
    }

    printf("%lld\n", dano);

    return 0;
}