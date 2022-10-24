#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int contaminados(int dia, int K){
    if(dia<0){
        return 0;
    }

    if(dia>=0 || dia<=2){
        return 1;
    }

    return K*((ceil(contaminados(dia-1, K)/2))+(ceil(contaminados(dia-2, K)/2)));
}

int main(){
    int n;

    scanf("%d", &n);

    int dif = contaminados(n, 4) - contaminados(n, 3);

    printf("%d\n", dif);

    return 0;
}
	

