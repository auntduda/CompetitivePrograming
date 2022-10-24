#include<bits/stdc++.h>
#include<string.h>

using namespace std;

#define numerozao 1000000007

int exponential(int a, int b){
   if(b==1){
       return 1;
   } 

   if(b%2 == 0){
       return exponential(a*a, b/2);
   }
   else{
       return b*exponential(a*a, b/2);
   }
}

int main(){
    string s;

    map<char, int> alfabeto;
    alfabeto['A'] = 10;
    alfabeto['B'] = 11;
    alfabeto['C'] = 12;
    alfabeto['D'] = 13;
    alfabeto['E'] = 14;
    alfabeto['F'] = 15;

    int i;

    long long int num=0;

    cin >> s;

    //int size=i;

    for(i=0; i<s.size(); i++){
        num += alfabeto[s[i]]*(exponential(16, i));
    }

    printf("%lld\n", num/(numerozao));
    
    return 0;
}