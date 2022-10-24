#include<bits/stdc++.h>

using namespace std;

int main(){
    int pares=0;
    string s;

    cin >> s;

    //s += "L";

    vector<int> flag (s.size(), 0);

    for(int i=0; i<s.size()-1; i++){
        if(s[i]=='V'){
            if(s[i+1]=='K'){
                flag[i] = 1;
                flag[i+1] = 1;

                pares++;
            }
        }
    }

    /*for(int i=0; i<s.size(); i++){
        if(s[i]=='V'){
            if(s[i+1]=='K'){
                continue;
            }
            else if(s[i+1]=='V' && flag==true){
            //cout << "entrei em V" << endl;
                s[i+1] ='K';
                flag=false;
                break;
            }
        }
        else if(s[i]=='K'){
            if(i>0 && s[i-1]=='V'){
                continue;
            }
            else if(s[i+1]=='K' && flag==true){
            //cout << "entrei em K" << endl;
                s[i] ='V';
                flag=false;
                break;
            }
        }
    }*/

    for(int i=0; i<flag.size()-1; i++){
        if(flag[i]==0 && flag[i+1]==0){
            if(s[i]=='V' || s[i+1]=='K'){
                pares++;

                break;
            }
            
            //s[i-1] = 'V';
            
            /*else if(flag[i+1]==0){
                if(s[i]=='V'){
                    //s[i+1] = 'K';

                    flag[i] = 1;
                    flag[i+1] = 1;
                }
                else if(s[i+1]=='K'){
                    //s[i] = 'V';
                    flag[i] = 1;
                    flag[i+1] = 1;
                }
            }*/
        }
    }

    /*for(int i=0; i<s.size(); i=i+2){
        if(flag[i]==1){
            if(flag[i+1]==1){
                pares++;
            }
        }
    }*/

    cout << pares << endl;

    //cout << s << endl;

    return 0;
}