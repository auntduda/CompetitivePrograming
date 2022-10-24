#include <iostream>

using namespace std;

int main() {
    int t, inst=1;
    cin >> t;
    cin.ignore();
    for(int i=0;i<t;i++){
        string fc, f1, f2;
        getline(cin, fc);
        getline(cin, f1);
        getline(cin, f2);
        int t1=0, t2=0;
        for(int j=0;j<fc.size();j++){
            if(fc[j]==f1[j]) t1++;
            if(fc[j]==f2[j]) t2++;
        }
        cout << "Instancia " << inst << endl;
        if(t1>t2){
            cout << "time 1" << endl;
        } else if(t1<t2){
            cout << "time 2" << endl;
        } else{
            bool v1=true, v2=true;
            for(int j=0;j<fc.size();j++){
                if(fc[j]!=f1[j]) v1 = false;
                if(fc[j]!=f2[j]) v2 = false;
                if(v1==false && v2==false){
                    v1 = true;
                    v2 = true;
                }
                if((v1==false && v2==true) or (v1==true && v2==false)) break;
            }
            if((v1==false && v2==false) or (v1==true && v2==true)) cout << "empate" << endl;
            else if(v1==true) cout << "time 1" << endl;
            else cout << "time 2" << endl;
        }
        cout << endl;
        inst++;
    }
    
    return 0;
}