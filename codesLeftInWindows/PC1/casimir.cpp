#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a=0, b=0, c=0;
    string s;

    cin >> t;

    while(t--){
        cin >> s;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
            else if(s[i]=='C'){
                c++;
            }
        }

        if(a+c==b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        a=0;
        b=0;
        c=0;
    }

    return 0;
}