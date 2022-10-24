#include <iostream>

using namespace std;

int main(){
    string s, temp = "";
    cin >> s;
    
    double tot = 0, nums = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '1' && s[i] != '0'){
            nums++;
            tot += int(s[i])-48;
        } else{ // eh um ou dez
            if(i < s.size()-1 && s[i+1] == '0'){
                nums++;
                tot += 10;
                i++;
            } else{
                nums++;
                tot++;
            }
        }
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << tot/nums << endl;
    
    return 0;
}