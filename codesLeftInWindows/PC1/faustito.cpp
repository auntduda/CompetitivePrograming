#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main(){
    long long int s, n, ans=0, x, y, xp=0;

    scanf("%lld %lld", &s, &n);

    queue<pair<lli,lli>> par;

    // O(10^3)
    for(int i=0; i<n; i++){
        scanf("%lld %lld", &x, &y);

        if(s>x){
            s+=y;
        }
        else{
            par.push(make_pair(x,y));
        }
    }

    //sort(par.begin(), par.end());
    int i=0, count=0;

    //O(10^3)
    while(par.size()>0){
        auto removeu = par.front();

        if(s>removeu.first){
            s += par.front().second;
            par.pop();
        }
        else{
            //removeu = par.front();
            par.pop();
            par.push(removeu);
        }

        count++;

        if(count>1e6)
            //ans=0;
            break;
    }

    if(par.size()!=0)
        printf("NO\n");
    else
        printf("YES\n");

    //veriricar so depois de efetuar todas as contas ou verificar a cada operacao?

    return 0;
}