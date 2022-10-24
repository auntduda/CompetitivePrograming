#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int r, g, b, n;
    cin >> n;
    for(int i=0;i<n;i++){
        string e;
        cin >> e;
        cin >> r >> g >> b;
        cout << "Caso #" << i+1 << ": ";
        if(e=="min"){
            if(r<g){
                if(r<b){
                    cout << r << endl;
                } else{
                    cout << b << endl;
                }
            } else{
                if(g<b){
                    cout << g << endl;
                } else{
                    cout << b << endl;
                }
            }
        } else if(e=="mean"){
            cout << floor((r+g+b)/3.0) << endl;
        } else if(e=="max"){
            if(r>g){
                if(r>b){
                    cout << r << endl;
                } else{
                    cout << b << endl;
                }
            } else{
                if(g>b){
                    cout << g << endl;
                } else{
                    cout << b << endl;
                }
            }
        } else{
            cout << floor((0.3*r)+(0.59*g)+(0.11*b)) << endl;
        }
    }
    
    return 0;
}