#include <iostream>

using namespace std;

int main(){
    int n;
    string pal, cri;
    cin >> n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin, pal);
        cri="";
        if(pal.size()==0){
            if(isalpha(pal[0])) cri=char(int(pal[0])+3);
            else cri=pal[0];
        } else{
            for(int j=pal.size()-1;j>=0;j--){
                if(isalpha(pal[j])) cri+=char(int(pal[j])+3);
                else cri+= pal[j];
            }
            for(int j=pal.size()/2;j<pal.size();j++) cri[j]=char(int(cri[j])-1);
        }
        cout << cri << endl;
    }

    return 0;
}
