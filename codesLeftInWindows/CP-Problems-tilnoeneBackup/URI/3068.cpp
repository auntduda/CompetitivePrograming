#include <iostream>

using namespace std;

int main(){
    int n, k=1;
    double a, b, c, d;
    string res = "";
    while(true){
        cin >> a >> b >> c >> d;
        if(a==0 && b==0 && c==0 && d==0) break;
        double a1, a2, a3, a4, ar, x, y;
        int met = 0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            a1 = (c-a)*(b-y)/2.0;
            a2 = (b-d)*(x-a)/2.0;
            a3 = (c-a)*(y-d)/2.0;
            a4 = (b-d)*(c-x)/2.0;
            ar = (b-d)*(c-a);
            if(a1>=0 && a2>=0 && a3>=0 && a4>=0) met++;
        }

        res+="Teste "+to_string(k)+"\n";
        res+=to_string(met)+"\n";
        
        k++;
    }
    cout << res;
    
    return 0;
}