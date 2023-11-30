#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main()
{
    string a;
    int k;

    cin >> a;
    scanf("%d", &k);

    while(k>0)
    {
        for(int i=0; i<a.size(); i++)
        {
            for(int j=i+1; j<i+1+k; j++)
            {
                if(a[j]>a[i])
                {
                    char aux = a[i]; //ele ta trocando direto enquanto deveria trocar um de cada vez
                    a[i] = a[j];
                    a[j] = aux;
                    k = k-(j-i);
                }

                //cout << "a eh " << a << " e k eh " << k << endl;
            }
        }
    }

    cout << a << endl;

    return 0;
}