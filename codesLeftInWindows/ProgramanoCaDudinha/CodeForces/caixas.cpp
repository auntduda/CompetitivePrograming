#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    int n, m, temp = -1, temp_novo;
    long long int soma = 0;
 
    cin >> n >> m;

    cin >> temp_novo;
    soma+=temp_novo;
    m--;
    temp=temp_novo;
 
    for (int i = 1; i < n; i++){
        cin >> temp_novo;
        if(m==0){
            break;
        }
        if(temp_novo <= temp and m > 0){
            //cout << "entrou o numero " << temp_novo << endl;
            soma += temp_novo;
            m--;

            temp=temp_novo;
        }
    }
 
    cout << soma << endl;
 
    return 0;
}