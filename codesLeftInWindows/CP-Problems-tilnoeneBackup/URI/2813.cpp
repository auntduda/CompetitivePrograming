#include <iostream>

using namespace std;

int main() {
    int n, c=0, e=0, maiorc=0, maiore=0, precc=0, prece=0;
    cin >> n;
    string sd, sn;
    for(int i=0;i<n;i++){
        cin >> sd >> sn;
        if(sd=="chuva"){
            if(c==0){
                precc++;
                c++;
                if(precc>maiorc) maiorc=precc;
            }
            
            c--;
            e++;
        }
        if(sn=="chuva"){
            if(e==0){
                prece++;
                e++;
                if(prece>maiore) maiore=prece;
            }
            
            e--;
            c++;
        }
        if(i==n-1){
            if(precc>maiorc) maiorc=precc;
            if(prece>maiore) maiore=prece;
        }
    }
    cout << maiorc << " " << maiore << endl;
    
    return 0;
}