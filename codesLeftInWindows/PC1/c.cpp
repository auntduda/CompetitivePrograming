#include<bits/stdc++.h>

using namespace std;

int main(){
    int b, l, pos=-1, falta;

    long long int num=0;

    scanf("%d %d", &b, &l);

    vector<int> d(l+1);

    for(int i=1; i<=l; i++){
        scanf("%d", &d[i]);
    }

    int bAntigo=1;

    for(int i=l; i>=1; i--){
        num+=bAntigo*d[i];

        bAntigo=bAntigo*b;
    }

    if(num%(b+1)==0){
        printf("0 0\n");

        return 0;
    }else{
        falta = num%(b+1);

        for(int i=l; i>=1; i--){
            if(falta==d[i]){
                pos=i;
                break;
            }
        }

        d[pos] = 0;

        num=0;
        bAntigo=1;

        for(int i=l; i>=1; i--){
            num+=bAntigo*d[i];

            bAntigo=bAntigo*b;
        }

        if(num%(b+1)!=0){
            printf("-1 -1\n");

            return 0;
        }
        else{
            printf("%d 0\n", pos);

            return 0;
        }
    }
    
}