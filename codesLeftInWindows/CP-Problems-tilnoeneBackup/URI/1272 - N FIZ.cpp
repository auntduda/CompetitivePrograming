#include <iostream>

using namespace std;

int main(){
    int n, c;
    string pal, ns;
    //cin >> n;
    
    for(int i=0;i<3;i++){
        cin.clear();
        getline(cin, pal);
        cout << pal << endl;
        c=1;
        for(int j=0;j<pal.size();j++){
            if(pal[j]==' '){
                c=0;
            } else if(isalpha(pal[j]) and c!=0){
                cout << pal[j];
                c=0;
            }
        }
        cout << endl;
    }

    return 0;
}