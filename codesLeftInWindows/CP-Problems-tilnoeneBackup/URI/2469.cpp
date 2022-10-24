#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n;
    vector<int> notas;
    for(int i = 0; i < n; i++){
        cin >> k;
        notas.push_back(k);
    }
    
    sort(notas.begin(), notas.end());
    
    int seq = 1, numatual = notas[0], maiorseq = 1, maiornum = notas[0];
    for(int i = 1; i < n; i++){
        if(notas[i] == numatual){
            seq++;
        } else{
            
            if(seq == maiorseq){
                if(numatual > maiornum)
                    maiornum = numatual;
            } else if(seq > maiorseq){
                maiorseq = seq;
                maiornum = numatual;
            }
            
            seq = 1;
            numatual = notas[i];
        }
        
    }
    
    if(seq == maiorseq){
        if(numatual > maiornum)
            maiornum = numatual;
    } else if(seq > maiorseq){
        maiorseq = seq;
        maiornum = numatual;
    }
    
    cout << maiornum << endl;
    
    return 0;
}