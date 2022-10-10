#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> aint(n);
    long long sum=0;

    for(int i=0; i<n; i++)
    {
        double aux;
        scanf("%lf", &aux);
        //if(aux<0 && aux>-1) aint[i] = floor(aux);
        //else if(aux>0 && aux<1) aint[i] = ceil(aux);
        if(aux-(int)aux==0) aint[i] = (int) aux;
        else aint[i]= ceil(aux);
        
        sum+=aint[i];
    }
    
    for(int i=0; i<n; i++) printf("%d\n", aint[i]);
    printf("sum is %lld\n", sum);
    
    if(sum>0 || sum<0)
    {
        int i=0;

        while(sum--)
        {
            if(aint[i]==0) continue;
            else aint[i]--;
            
            i++;
        }
    }
    
    for(int i=0; i<n; i++) printf("%d\n", aint[i]);
    
    return 0;
}