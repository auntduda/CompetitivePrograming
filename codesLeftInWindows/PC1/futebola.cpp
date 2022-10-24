#include<bits/stdc++.h>

using namespace std;

int main(){
    int time1=0, time0=0, jogadores;
    string s;

    cin >> s;

    for(int i=0; i<s.size(); i++){
        //printf("char na posicao %d: %c\n", i, s[i]);
        if(s[i] == '1'){
            time1++;
            time0=0;

            if(time1>=7){
                break;
            }
        }
        else if(s[i] == '0'){
            time0++;
            time1=0;

            if(time0>=7){
                break;
            }
        }
    }

    //printf("time1 = %d\n time0 = %d\n", time1, time0);

    if(time0>=7){
        printf("YES\n");
    }    
    else if(time1>=7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}