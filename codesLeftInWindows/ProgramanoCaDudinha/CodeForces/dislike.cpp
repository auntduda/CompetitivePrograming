#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, k, cont=0, ans, i=1;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &k);

        while(cont!=k){
            if(i%3!=0 && i%10!=3){
                ans=i;
                cont++;
                //printf("o cont atual eh %d, e a resposta eh %d\n", cont, ans);
            }
            i++;
        }

        printf("%d\n", ans);

        cont=0;
        i=1;
    }

    return 0;
}