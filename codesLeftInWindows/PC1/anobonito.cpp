#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, i, m, c, d, u, ano;

    scanf("%d", &n);

    ano=n;

    for(i=n+1; i<9123; i++){
        //printf("entrado\n");
        ano=i;
        m=ano/1000;
        ano=ano%1000;
        c=ano/100;

        if(m!=c){
            ano=ano%100;
            d=ano/10;

            if(c!=d && m!=d){
                u=ano%10;

                if(m!=u && c!=u && d!=u){
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        else{
            continue;
        }
    }

    printf("%d\n", i);

    return 0;
}