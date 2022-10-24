#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    string ans;
    while(n--){
        getline(cin, ans);
        if(ans[0] != ' ')
            cout << ans[0];
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == ' ')
                if(i < ans.size()-1 && isalpha(ans[i+1]))
                    cout << ans[i+1];
        }
        cout << endl;
    }
    
    return 0;
}