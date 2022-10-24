#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, menor;
    cin >> a >> b >> c >> d;
    menor=abs((a+b)-(c-d)); // AB x CD
    if(abs((a+c)-(b+d))<menor){ //AC
        menor=abs((a+c)-(b+d));
    }
    if(abs((a+d)-(b+c))<menor){ // AD
        menor=abs((a+d)-(b+c));
    }
    //AB AC AD BC BD CD
    cout << menor << endl;
    
    return 0;
}