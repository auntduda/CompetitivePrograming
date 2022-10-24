#include <stdio.h>
#include <string.h>
#define false 0
#define true 1

int main(){
    int t, i, j, inst=1;
    scanf("%d", &t);
    getchar();
    
    for(i=0;i<t;i++){
        char fc[120], f1[120], f2[120];
        gets(fc);
        gets(f1);
        gets(f2);
        
        int t1=0, t2=0;
        for(j=0;j<strlen(fc);j++){
            if(fc[j]==f1[j]) t1++;
            if(fc[j]==f2[j]) t2++;
        }
        printf("Instancia %d\n", inst);
        if(t1>t2){
            printf("time 1\n");
        } else if(t1<t2){
            printf("time 2\n");
        } else{
            int v1=true, v2=true;
            for(j=0;j<strlen(fc);j++){
                if(fc[j]!=f1[j]) v1 = false;
                if(fc[j]!=f2[j]) v2 = false;
                if(v1==false && v2==false){
                    v1 = true;
                    v2 = true;
                }
                if((v1==false && v2==true) || (v1==true && v2==false)) break;
            }
            if((v1==false && v2==false) || (v1==true && v2==true)) printf("empate\n");
            else if(v1==true) printf("time 1\n");
            else printf("time 2\n");
        }
        printf("\n");
        inst++;
    }
    
    return 0;
}