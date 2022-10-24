#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    while(cin >> t){
        int a, b, c;
        char res[t];
        for(int i=0;i<t;i++){
            cin >> a;
            cin.ignore();
            string op, num="";
            getline(cin, op);
            int j=0;
            while(op[j]!='='){
                num+=op[j];
                j++;
            }
            j++;
            b=stoi(num);
            num="";
            while(j<op.size()){
                num+=op[j];
                j++;
            }
            c=stoi(num);
            
            if(a+b==c) res[i]='+';
            else if(a-b==c) res[i]='-';
            else if(a*b==c) res[i]='*';
            else res[i]='I';
        }
        vector<string> erro;
        string nome;
        int esc;
        char sinal;
        for(int i=0;i<t;i++){
            cin >> nome >> esc >> sinal;
            if(res[esc-1]!=sinal) erro.push_back(nome);
        }
        if(erro.size()==0) cout << "You Shall All Pass!" << endl;
        else if(erro.size()==t) cout << "None Shall Pass!" << endl;
        else{
            sort(erro.begin(), erro.end());
            for(int i=0;i<erro.size();i++){
                cout << erro[i];
                if(i==erro.size()-1) cout << endl;
                else cout << " ";
            }
        }
    }
    
    return 0;
}