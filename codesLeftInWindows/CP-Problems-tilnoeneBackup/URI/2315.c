#include <stdio.h>

int main(){
    int di, mi, df, mf, dtot = 0;
    scanf("%d %d %d %d", &di, &mi, &df, &mf);
    
    int i, mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(mi == mf) 
        dtot = df - di;
    else{
        dtot += mes[mi]-di + df;
        for(i = mi + 1; i < mf; i++)
            dtot += mes[i];
            
    }
    
    printf("%d\n", dtot);
    
    return 0;
}