#include <iostream>

using namespace std;

int main(){
    string txt;
    int vn, vi;
    while(getline(cin, txt)){
        vn=0;
        vi=0;
        for(int i=0;i<txt.size();i++){
            if(txt[i]=='_'){
                if(vi==0){
                    cout << "<i>";
                    vi++;
                } else{
                    cout << "</i>";
                    vi--;
                }
            } else if(txt[i]=='*'){
                if(vn==0){
                    cout << "<b>";
                    vn++;
                } else{
                    cout << "</b>";
                    vn--;
                }
            } else{
                cout << txt[i];
            }
        }
        cout << endl;
    }
    return 0;
}
