#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, e, i, a, b, c, tempo=0, forca=0, massa=0;

    vector<pair<int,int>> mt;
    vector<pair<int,int>> me;

    scanf("%d %d %d", &n, &m, &e);

    while(n--){
        scanf("%d %d %d", &a, &b, &c);

        mt.push_back(make_pair(a,b));
        me.push_back(make_pair(c,a));
    }

    reverse(mt.begin(), mt.end());
    sort(me.begin(), me.end());

    i=0;

    while(tempo<=m || i<mt.size()){
        if(mt[i].second+tempo<m){
            massa+=mt[i].first;
            tempo+=mt[i].second;
        }

        i++;
    }

    i=0;

    while(forca<=e || i<me.size()){
        if(me[i].first+forca<e){
            massa+=me[i].second;
            forca+=me[i].first;
        }

        i++;
    }

    printf("%d\n", massa);

    return 0;
}