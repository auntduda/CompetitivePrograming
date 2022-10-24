#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a, b, c, d, p1 = 0, p2 = 0;
        char temp;
        cin >> a >> temp >> b >> d >> temp >> c;
        
        if(a == b){
            p1++;
            p2++;
        } else if(a > b) p1 += 3;
        else p2 += 3;
        
        if(d == c){
            p1++;
            p2++;
        } else if(c > d) p1 += 3;
        else p2 += 3;
        
        if(p1 > p2) cout << "Time 1" << endl;
        else if(p1 < p2) cout << "Time 2" << endl;
        else{
            int sa = (a+c)-(b+d), sb = (b+d)-(a+c);
            if(sa > sb) cout << "Time 1" << endl;
            else if(sa < sb) cout << "Time 2" << endl;
            else{
                if(a < d) cout << "Time 1" << endl;
                else if(a > d) cout << "Time 2" << endl;
                else cout << "Penaltis" << endl;
            }
        }
        
        
    }
    
    return 0;
}