#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b, c, n, maior=0, menor=0;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d %d", &a, &b, &c, &n);

        maior=max(a,max(b,c));

        n-=maior-a;
        a+=maior-a;

        if(n>=0){
            n-=maior-b;
            b+=maior-b;
            
            if(n>=0){
                n-=maior-c;
                c+=maior-c;

                if(n>=0){
                    if(n%3==0){
                        printf("YES\n");
                    }
                    else{
                        printf("NO\n");
                    }
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }

        /*if(a==b&&b==c){
            if(n%3==0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }

        if(a>b&&a>c){
            while(b<a && n>0){
                b+=1;
                n--;
            }

            while(c<a && n>0){
                c+=1;
                n--;
            }

            if(a==b&&a==c){
                if(n%3==0){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("NO\n");
            }
        }
        else if(b>a&&b>c){
            while(a<b && n>0){
                a+=1;
                n--;
            }

            while(c<b && n>0){
                c+=1;
                n--;
            }

            if(b==a&&b==c){
                if(n%3==0){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("NO\n");
            }
        }
        else if(c>a&&c>b){
            while(a<c && n>0){
                a+=1;
                n--;
            }

            while(b<c && n>0){
                b+=1;
                n--;
            }

            if(c==a&&c==b){
                if(n%3==0){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                printf("NO\n");
            }
        }
        else{
                        
        }*/
    }

    return 0;
}