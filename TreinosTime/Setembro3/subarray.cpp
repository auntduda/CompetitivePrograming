#include<bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main()
{
    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        vector<long long> array; bool flag=false; long long dif; int l, r;

        for(int i=0; i<n; i++)
        {
            long long aux;
            scanf("%lld", &aux);
            array.push_back(aux);
        }

        for(int i=1; i<n; i++)
        {
            dif = abs(array[i]-array[i-1]);
            if(dif>=2)
            {
                l=i; r=i+1;
                flag=true;
                break;
            }
        }

        if(flag)
        {
            printf("YES\n%d %d\n", l, r);
        }else
        {
            printf("NO\n");
        }
    }

    return 0;
}