#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        int cnt[n], max=-1, ans=-1;

        for(int i=0; i<n; i++)
        {
            scanf("%d", &cnt[i]);

            if(cnt[i]>max)
            {
                max=cnt[i];
                ans=i;
            }
        }

        printf("%d\n", ans+1);
    }

    return 0;
}