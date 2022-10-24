#include<bits/stdc++.h>

using namespace std;

bool comp(int i, int j){
    return i>j;
}

int main(){
    int n;

    scanf("%d", &n);

    vector<int> perm(n);

    for(int i=0; i<n; i++){
        scanf("%d", &perm[i]);
    }

    sort(perm.begin(), perm.end(), comp);

    for(int i=0; i<n; i++){
        printf("%d ", perm[i]);
    }
    printf("\n");

    return 0;
}