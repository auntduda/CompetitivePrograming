#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        vector<int> round;

        int i=0;

        while(n!=0)
        {
            if(n%10!=0) round.push_back(n%10*pow(10,i));
            n = n/10; i++;
        }

        printf("%ld\n", round.size());
        for(int i=0; i<round.size(); i++)
        {
            printf("%d ", round[i]);
        }

        printf("\n");
    }

    return 0;
}