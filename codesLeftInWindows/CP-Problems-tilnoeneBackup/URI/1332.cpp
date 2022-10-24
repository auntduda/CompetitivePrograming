#include <bits/stdc++.h>

using namespace std;

int dif(string a, string b){
    int ans = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            ans++;
    }
    
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string one = "one", two = "two" , three = "three", pal;
    
    int n;
    cin >> n;
    while(n--){
        cin >> pal;
        
        if(dif(pal, one) <= 1) cout << 1 << endl;
        else if(dif(pal, two) <= 1) cout << 2 << endl;
        else cout << 3 << endl;
        
    }
    
    return 0;
}