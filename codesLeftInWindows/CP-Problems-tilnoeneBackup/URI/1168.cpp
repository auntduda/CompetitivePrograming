#include <bits/stdc++.h>

using namespace std;

int ctoi(char n){ return (int)n-48; }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> n;
    while(n--){
        string num;
        cin >> num;
        int sum = 0;
        for(int i = 0; i < num.size(); i++){
            sum += leds[ctoi(num[i])];
        }
        cout << sum << " leds" << endl;
        
    }
    
    return 0;
}