#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int sum=a+b;

    if(((sum*2) - (a/3) + (sum+b))<8.7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}