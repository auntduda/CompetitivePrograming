#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, soma=0;

    bool flag=true;

    vector<int> divisors;

    scanf("%d", &t);

    while(t--){
        int c;

        scanf("%d", &c);

        for(int i=1; i<=c; i++){
            if(soma<c){
                soma += i;

                divisors.push_back(i);
            }
            else{
                break;
            }
        }

        int number = divisors[0]*divisors[divisors.size()-1];

        for(int i=1; i<divisors.size()-1; i++){
            int aux = divisors[i]*divisors[divisors.size()-1-i];

            if(aux != number){
                flag=false;
                break;
            }
        }

        if(flag){
            printf("%d\n", number);
        }
        else{
            printf("-1\n");
        }

        flag=true;
        divisors.clear();
        soma=0;
    }

    return 0;
}