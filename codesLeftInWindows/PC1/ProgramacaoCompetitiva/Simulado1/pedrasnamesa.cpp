#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, retirar=0;

    scanf("%d", &n);

    char cores[n];

    scanf("%c", &cores[0]);

    for(int i=1; i<n+1; i++){
        scanf("%c", &cores[i]);

        if(cores[i] == cores[i-1]){
            retirar++;
        }
    }

    printf("%d\n", retirar);

    return 0;
}