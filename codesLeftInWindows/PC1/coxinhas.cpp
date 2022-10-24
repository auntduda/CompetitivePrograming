#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, coxinha=0;
    bool flag=false;

    string alberto;
    string tiago;

    cin >> n;
    cin >> tiago;
    cin >> alberto;

    vector<long long int> albertoV(10, 0);

    //memset(albertoV, -1, n*sizeof(int));
    //memset(tiagoV, -1, n*sizeof(int));

    for(int i=0; i<n; i++){
        long long int num = alberto[i] - '0';
        albertoV[num]++;
    }

    //70000000000000
    //666666666666666

    //sort(albertoV.begin(), albertoV.end());

    for(int i=0; i<n; i++){
        long long int numTiago = tiago[i] - '0';
        //printf("num do tiago: %d\n", numTiago);

        if(albertoV[numTiago]>0){
            albertoV[numTiago]--;
            //flag=true;
            //printf("tinha um numero igual ao do tiago\n");
        }else{
            for(int j=numTiago+1; j<10; j++){
                if(albertoV[j]>0){
                    //printf("tinha um numero maior que o do tiago\n");
                    albertoV[j]--;
                    flag=true;
                    break;
                }
            }

            if(!flag){
                //printf("alberto perdeu\n");
                coxinha++;
            }

            flag=false;
        }

    }

    printf("%lld\n", coxinha);

    coxinha=0;
    flag=false;
    //memset(&albertoV, 0, 10*sizeof(int));

    for(int i=0; i<10; i++){
        albertoV[i] = 0;
    }

    for(int i=0; i<n; i++){
        long long int num = alberto[i] - '0';
        albertoV[num]++;
    }

    for(int i=0; i<n; i++){
        long long int numTiago = tiago[i] - '0';

        if(numTiago<9){
            if(albertoV[numTiago+1]>0){
                //printf("tinha um numero maior que o do tiago\n");
                albertoV[numTiago+1]--;
                coxinha++;
                //flag=true;
            }else{
                for(int j=numTiago+2; j<10; j++){
                    if(albertoV[j]>0){
                        //printf("tinha um numero maior que o do tiago\n");
                        albertoV[j]--;
                        //flag=true;
                        coxinha++;
                        break;
                    }
                }
            }
        }

        //flag=false;
    }

    printf("%lld\n", coxinha);

    return 0;
}