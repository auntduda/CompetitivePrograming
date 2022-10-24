#include <iostream>

using namespace std;

int main(){
    long long int n;
    while(cin >> n){
        long long int trab[n];
        for(long long int i=0;i<n;i++) cin >> trab[i];
        
        long long int s1[n], s2[n];
        s1[0]=trab[0];
        s2[n-1]=trab[n-1];
        for(long long int i=1;i<n;i++) s1[i]=s1[i-1]+trab[i];
        for(long long int i=n-2;i>=0;i--) s2[i]=s2[i+1]+trab[i];
        
        long long int menor=s2[0];
        for(long long int i=1;i<n;i++){
            if(abs(s2[i]-s1[i-1])<menor && abs(s2[i]-s1[i-1])>=0) menor=abs(s2[i]-s1[i-1]);
        }
        cout << menor << endl;
    }
    
    return 0;
}