#include <iostream>
#include <vector>

using namespace std;

int main() {
    int p, s, u, v, c = 1;
    while (cin >> p >> s) {
        if (p == 0 && s == 0) break;
        int praia[10024] = {};
        cout << "Teste " << c << endl;
        for(int i=0;i<s;i++){
            cin >> u >> v;
            praia[u]++;
            praia[v]--;
        }
        
        vector<int> res;
        int ini, fim, pes=0;
        for(int i=0;i<=p;i++){
            if(i==p && ini!=-1){
                if(praia[i]>0){
                    if(pes==0){
                        ini = i;
                        pes+=praia[i];
                    } else pes++;
                } else if(praia[i]<0){
                    pes-=praia[i];
                    if(pes==0){
                        fim=i;
                    }
                }
                cout << ini << " " << i << endl;
            } else{
                if(praia[i]>0){
                    if(pes==0) ini=i;
                    pes+=praia[i];
                } else if(praia[i]<0){
                    pes+=praia[i];
                    if(pes==0){
                        fim=i;
                        cout << ini << " " << fim << endl;
                        ini=-1;
                    }
                }
            }
        }
        cout << endl;
        c++;
    }
    
    return 0;
}