#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        int a[n][n], ic=n-(n+1)/2, jc=n-(n+1)/2;
        if(n==1){
            a[0][0]=1;
        } else if(n==2){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=1;
                }
            }
        } else if(n%2!=0){ // n impar
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=jc+1-max(abs(ic-i),abs(jc-j));
                }
            }
        } else{ // n par
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=0;
                }
            }
            // 4 quadrante
            for(int i=ic;i<n;i++){
                for(int j=jc;j<n;j++){
                    a[i][j]=jc-max(abs(ic-i),abs(jc-j));
                }
            }
            // 1 quadrante
            ic--;
            for(int i=0;i<ic+1;i++){
                for(int j=jc;j<n;j++){
                    a[i][j]=jc-max(abs(ic-i),abs(jc-j));
                }
            }
            // 2 quadrante
            jc--;
            for(int i=0;i<ic+1;i++){
                for(int j=0;j<jc+1;j++){
                    a[i][j]=(jc+1)-max(abs(ic-i),abs(jc-j));
                }
            }
            // 3 quadrante
            ic++;
            for(int i=ic;i<n;i++){
                for(int j=0;j<jc+1;j++){
                    a[i][j]=(jc+1)-max(abs(ic-i),abs(jc-j));
                }
            }
        }

        //printa matriz formatada
        int val=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // printa espaços dps o numero
                if(j==0){ // nem precisava disso
                    if(a[i][j]==100){
                        continue;
                    } else if(a[i][j]>=10){
                        cout << " ";
                    } else{
                        cout << "  ";
                    }
                } else{
                    if(a[i][j]==100){
                        continue;
                    } else if(a[i][j]>=10){
                        cout << "  ";
                    } else{
                        cout << "   ";
                    }
                }
                if(j==n-1){
                    val=0;
                }
                cout << a[i][j];
                if(val==0){
                    cout << endl;
                    val=-1;
                }
                
            }
        }
        cout << endl;
    }

    return 0;
}