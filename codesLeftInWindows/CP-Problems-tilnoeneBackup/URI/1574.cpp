#include <iostream>

using namespace std;

int main(){
    int n, t;
    cin >> n;
    while(n--){
        cin >> t;
        string mov;
        
        cin.ignore();
        int tot[110] = {}, pos = 0;
        for(int i = 0; i < t; i++){
            getline(cin, mov);
            
            if(mov == "LEFT"){
                pos--;
                tot[i] = -1;
            } else if(mov == "RIGHT"){
                pos++;
                tot[i] = 1;
            } else{
                int esp = 0;
                string ntemp = "";
                
                for(int j = 0; j < mov.size(); j++){
                    if(esp > 1){
                        ntemp += mov[j];
                    } else{
                        if(mov[j] == ' ') esp++;
                    }
                    
                }
                
                int num = stoi(ntemp);
                
                pos += tot[num-1];
                tot[i] = tot[num-1];
            }
        }
        
        cout << pos << endl;
    }
    
    return 0;
}