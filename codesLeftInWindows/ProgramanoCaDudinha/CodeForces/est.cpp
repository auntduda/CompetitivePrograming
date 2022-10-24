#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    int n, tempo;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tempo;

        if(tempo <= 15){
            printf("0.00\n");
        }else if(tempo>15 && tempo <= 60){
            double vt = 0.1*(tempo-15);
            printf("%.2lf\n", vt);
        }else if(tempo>60 && tempo <= 60*3){
            double vt = 4.5+0.08*(tempo-(60));
            printf("%.2lf\n", vt);
        }else if(tempo>60*3 && tempo <= 60*7){
            double vt = 14.1+0.06*(tempo-(60*3));
            printf("%.2lf\n", vt);
        }else{
            double vt = 28.5+0.02*(tempo-(60*7));
            printf("%.2lf\n", vt);
        }
    }

    return 0;
}

