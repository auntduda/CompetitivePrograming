#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, dif=0, maior=-1, repete;

    scanf("%d", &n);

    vector<int> cards(n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &cards[i]);
    }

    sort(cards.begin(), cards.end());
    maior=cards[n-1];

    for(int i=1; i<n; i++)
    {
        if(cards[i]!=cards[i-1])
        {
            dif++;
        }else
        {
            repete=cards[i];
        }
    }

    if(dif==0)
    {
        if(n%2==0)
        {
            printf("Agasa\n");
        }else{
            printf("Conan\n");
        }
    }else if(dif==n)
    {
        printf("Conan\n");
    }else
    {
        if(repete==maior)
        {
            printf("Conan\n");
        }else
        {
            if((n-dif)%2==0)
            {
                printf("Agasa\n");
            }else{
                printf("Conan\n");
            }
        }
    }

    return 0;
}