#include<bits/stdc++.h>

using namespace std;

int fibonacci[42];

int fib(int n){
    if(n==0)
        return 0;
    else if(n>0 && n<3)
        return 1;
    else if(fibonacci[n] != -1)
        return fibonacci[n];

    fibonacci[n] = fib(n-1)+fib(n-2);

    return fibonacci[n];
}

int main(){
    memset(fibonacci, -1, 42*sizeof(int));
    int n;

    scanf("%d", &n);

    printf("%d\n", fib(n));

    return 0;
}