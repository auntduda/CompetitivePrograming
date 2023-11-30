#include<bits/stdc++.h>

using namespace std;

vector<int> alunos(1003, 0);
int freq[1003];

int procura(int k)
{
    freq[k]++;
    
    if(freq[k]==2) return k;
    else return procura(alunos[k]);
}

int main()
{
    int n;

    scanf("%d", &n);

    memset(freq, 0, 1001*sizeof(int));

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &alunos[i]);
    }

    

    for(int i=1; i<=n; i++)
    {
        printf("%d ", procura(i));
        /*
        for(int i=1; i<=n; i++)
        {
            printf("%d ", freq[i]);
        }
        printf("\n");*/

        memset(freq, 0, 1001*sizeof(int));
    }

    printf("\n");

    return 0;
}