#include <stdio.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    char nome[128];
    for(int i=0;i<n;i++){
        scanf("%s", nome);
        printf("Y\n");
    }

    return 0;
}