#include <iostream>

using namespace std;

bool incgnt(string a){
    if(a == "L" or a == "J" or a == "R") return true;
    return false;
}

void resolve(string a, string b, string c){
    if(incgnt(a)){
        cout << stoi(c) - stoi(b) << endl;
    } else if(incgnt(b)){
        cout << stoi(c) - stoi(a) << endl;
    } else{
        cout << stoi(a) + stoi(b) << endl;
    }
}

int main(){
    string eq;
    while(cin >> eq){
        int a, b, it = 0;
        string v1 = "", v2 = "", v3 = "";
        
        while(eq[it] != '+'){
            v1 += eq[it];
            it++;
        }
        
        it++;
        while(eq[it] != '='){
            v2 += eq[it];
            it++;
        }
    
        it++;
        while(it != eq.size()){
            v3 += eq[it];
            it++;
        }
        
        resolve(v1, v2, v3);
        
    }
    
    return 0;
}