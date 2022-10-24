#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, ans=0;

    scanf("%d", &n);

    vector<int> a((2*n));

    for(int i=0; i<(2*n); i++){
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end());

    int i = a.size()/2;

    /*
    if(a[i-1]==a[i])
        printf("NO\n");
    else
        printf("YES\n");

    */

    while(i<a.size()){
        if(a[a.size()-1-i]<a[i]){
            ans++;
        }
        
        i++;
    }

    if(ans==n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}