#include <iostream>
#include <vector>

using namespace std;

int g, p, s, k, pil[101][101], pt[101];

void corrigeJogo(){
    int pp[101] = {}, maior=0;
    for(int i=0;i<g;i++)
        for(int j=0;j<p;j++)
            pp[j]+=pt[pil[j][i]-1];

    vector<int> ganhadores;

    for(int i=0;i<p;i++)
        if(pp[i]>maior) maior=pp[i];
    for(int i=0;i<p;i++)
        if(pp[i]==maior) ganhadores.push_back(i+1);

    for(int i=0;i<ganhadores.size();i++){
        cout << ganhadores[i];

        if(i==ganhadores.size()-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    while(true){
        cin >> g >> p;
        if(g==0 && p==0) break;
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++)
                pil[i][j] = 0;
        }
        for(int i=0;i<g;i++)
            for(int j=0;j<p;j++) cin >> pil[j][i];
        cin >> s;
        for(int i=0;i<s;i++){
            cin >> k;
            for(int j=0;j<101;j++) pt[j]=0;
            for(int j=0;j<k;j++) cin >> pt[j];
            corrigeJogo();
        }
    }
    
    return 0;
}