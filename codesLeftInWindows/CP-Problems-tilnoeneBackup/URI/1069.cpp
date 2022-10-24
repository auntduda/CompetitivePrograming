#include <iostream>

using namespace std;

int main() {
    int n, menor, maior;
    cin >> n;
    string c;
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, c);
        int total=0, seq=0, maior=0, menor=0;
        bool ini=false;
        for(int j=0;j<c.size();j++){
            if(c[j]=='<'){
                menor++;
                if(!ini) ini=true;
            } else if(c[j]=='>' && ini){
                maior++;
                if(maior-menor==0) ini=false;
            }
        }
        cout << min(menor, maior) << endl;

    }
    
    return 0;
}