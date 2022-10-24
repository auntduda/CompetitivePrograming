#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, xc, yc, xr, yr, p, i=0;

    scanf("%d %d %d", &n, &xc, &yc);

    vector<pair<int,int>> infos;

    while(n--){
        scanf("%d %d %d", &xr, &yr, &p);

        infos.push_back(make_pair(2*(abs(xr-xc)+abs(yr-yc))+p, i));

        i++;
    }

    sort(infos.begin(), infos.end());

    printf("%d %d\n", infos[0].first, infos[0].second+1);

    return 0;
}