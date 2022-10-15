#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        
        vector<int> a(n);
        bool flag=false;

        for(int i=0; i<n; i++) 
        {
            scanf("%d", &a[i]);
        
            if(a[i]==1) flag=true;
        }

        if(flag) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}