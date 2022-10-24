#include <iostream>
#include <string>

using namespace std;

int main(){
    int i, di, hi, mi, si, df, hf, mf, sf, st;
    string s, ditxt="";
    getline(cin, s);
    for(i=4;i<s.size();i++){
        ditxt+=s[i];
    }
    di=stoi(ditxt);
    
    getline(cin, s);
    ditxt="";
    ditxt+=s[0];
    ditxt+=s[1];
    hi=stoi(ditxt);
    
    ditxt="";
    ditxt+=s[5];
    ditxt+=s[6];
    mi=stoi(ditxt);

    ditxt="";
    ditxt+=s[10];
    ditxt+=s[11];
    si=stoi(ditxt);
    
    getline(cin, s);
    ditxt="";
    for(i=4;i<s.size();i++){
        ditxt+=s[i];
    }
    df=stoi(ditxt);

    getline(cin, s);
    ditxt="";
    ditxt+=s[0];
    ditxt+=s[1];
    hf=stoi(ditxt);
    
    ditxt="";
    ditxt+=s[5];
    ditxt+=s[6];
    mf=stoi(ditxt);

    ditxt="";
    ditxt+=s[10];
    ditxt+=s[11];
    sf=stoi(ditxt);

    st=(sf-si)+(mf*60-mi*60)+(hf*3600-hi*3600)+(86400*df-86400*di);
    
    cout << st/86400 << " dia(s)" << endl << (st%86400)/3600 << " hora(s)" << endl;
    cout << ((st%86400)%3600)/60 << " minuto(s)" << endl << (((st%86400)%3600)%60) << " segundo(s)" << endl;
        
    return 0;
}