#include<bits/stdc++.h>

using namespace std;

int n=200001;
vector<bool> is_prime(n+1, true);

void prime()
{
    is_prime[0]=is_prime[1]=true;

    for(int i=2; i<=n; i++)
    {
        if(is_prime[i] && (long long)i*i<=n)
        {
            for(int j=i*i; j<=n; j+=i) is_prime[j]=false;    
        }
    }
    //printf("deu ruim no prime?\n");
}

int main()
{
    int t;
    prime();
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        vector<int> a(n);

        for(int i=0; i<n; i++) scanf("%d", &a[i]);

        int r=n-1;
        int l=r;
        long long int ans=-1;

        while(r>=0 && l>=0)
        {

            if(is_prime[a[r]])
            {
                l=r;

                while(l>=0)
                {
                    //printf("to aqui saca so\n");
                    if(__gcd(a[r], a[l])==1)
                    {
                        ans=r+l;
                        break;
                    }else
                    {
                        l--;
                    }
                }

                break;

            }else
            {
                r--;
            }
        }

        if(ans==-1) printf("-1\n");
        else printf("%lld\n", ans+2);
    }

    return 0;
}