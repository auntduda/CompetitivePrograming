#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, save;
        string s;

        scanf("%d", &n);
        cin >> s;

        for(int i=n-1; i>=0; i--)
        {
            if(s[i]!=')')
            {
                save = i+1;
                break;
            }
        }

        if((n-save)<save)
        {
            cout << "Yes" << endl;
        }else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}