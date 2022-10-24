#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int,int>

int n;
string str;
int vez = 1;


int main(){
    cin >> n;

    for (int i = 0; i < n; i++){
        vez = 1;
        cin >> str;

        for(int i = 0; i < str.size(); i++){
            if (vez){
                if(str[i] == 'a'){
                    str[i] = 'b';
                }else{
                    str[i] = 'a';
                }
            }else{
                if(str[i] == 'z'){
                    str[i] = 'y';
                }else{
                    str[i] = 'z';
                }
            }
            vez = (vez+1)%2;
        }
        cout << str << endl;
    }
    

    return 0;
}