#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, m=0, maior=-8475, flag=0;

    vector<int> mesa;

    scanf("%d", &n);

    scanf("%d", &x);

    mesa.push_back(x);

    n=(2*n)-1;
    m++;

    while(n--){
        scanf("%d", &x);

        for(int i=0; i<mesa.size(); i++){
            if(x==mesa[i]){
                mesa[i]=0;
                m--;
                flag=1;

                break;
            }
        }

        if(flag==0){
            m++;

            if(m>maior){
                maior=m;
            }
        }

        flag=0;
    }

    printf("%d\n", maior);

    return 0;
}