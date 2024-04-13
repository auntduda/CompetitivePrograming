#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    char s[8];
    
    for(int i=0; i<8; i++)
    {
        cin >> s[i];
    }
    
    int count=0;
    
    for(int i=0; i<7; i++) if(s[i]=='1') count++;
    
    if((count%2==0 && s[7] == '1') || (count%2==1 && s[7] == '0')) cout << "S\n";
    else cout << "N?\n";
 
    return 0;
}