#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[11];
    int size;

    scanf("%s", s);

    for(int i=0; i<'\0'; i++){
        size++;
    }

    if(size/2 <5){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}