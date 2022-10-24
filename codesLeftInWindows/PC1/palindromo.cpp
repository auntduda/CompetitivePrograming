#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    int mid, count=0;

    cin >> s;

    mid=s.size()/2;

    if(s.size()%2==0){
        for(int i=0; i<mid; i++){
            if(s[i]!=s[s.size()-1-i]){
                count++;
            }
        }
    }
    else{
        for(int i=1; i<=mid; i++){
            if(s[mid-i] != s[mid+i]){
                count++;
            }
        }
    }

    if(count>1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

    return 0;
}