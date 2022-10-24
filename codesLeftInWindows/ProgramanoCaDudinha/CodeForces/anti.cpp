#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &k);

        vector<int> s;

        for(int i=n; i>k; i--){
            s.push_back(i);
        }

        int fim = k/2 + k%2;

        for(int i=k-1; i>=fim; i--){
            s.push_back(i);
        }
        
        printf("%lu\n", s.size());

        for(int i=0; i<s.size(); i++){
            printf("%d ", s[i]);
        }

        printf("\n");
    }
}