#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, b, p, f, h, c, lucro=0;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d %d %d", &b, &p, &f, &h, &c);

        b=b/2;

        if(c>h){
            while(f>0 && b>0){
                lucro+=c;

                f--;
                b--;
            }

            if(b>0){
                while(p>0 && b>0){
                    lucro+=h;

                    p--;
                    b--;
                }
            }
        }
        else{
            while(p>0 && b>0){
                lucro+=h;

                p--;
                b--;
            }

            if(b>0){
                while(f>0 && b>0){
                    lucro+=c;

                    f--;
                    b--;
                }
            }
        }

        printf("%d\n", lucro);
        lucro=0;
    }
    
    return 0;
}