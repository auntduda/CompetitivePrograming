#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, ans=0, dif;

    scanf("%d %d", &n, &k);

    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> diferenca(n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n; i++){
        dif = a[i]-b[i];
        diferenca.push_back(make_pair(dif, i));

        if(dif<=0){
            ans+=a[i];
            b[i]=0;
            k--;
        }
    }

    if(k<=0){
        for(int i=0; i<b.size(); i++)
            ans+=b[i];
    }else{
        sort(diferenca.begin(), diferenca.end());

        int i=0;

        while(k){
            if(diferenca[i].first>0){
                ans+=a[diferenca[i].second];
                k--;
            }

            i++;
        }

        while(i!=diferenca.size()){
            ans+=b[diferenca[i].second];
            i++;
        }
    }

    printf("%d\n", ans);

    return 0;
}