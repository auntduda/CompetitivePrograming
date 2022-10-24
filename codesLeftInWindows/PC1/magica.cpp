#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    scanf("%d", &n);

    vector<int> vA(n);

    for(int i=0; i<n; i++){
        scanf("%d", &vA[i]);
    }

    scanf("%d", &m);

    vector<int> vB(m);

    for(int i=0; i<m; i++){
        scanf("%d", &vB[i]);
    }

    sort(vA.begin(), vA.end());
    sort(vB.begin(), vB.end());

    printf("%d %d\n", vA[n-1], vB[m-1]);

    return 0;
}