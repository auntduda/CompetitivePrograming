#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);

        string s = "";

        if(a<b)
        {
            for(int i=0; i<a; i++)
            {
                s += "0";
                s+= "1";
            }

            for(int i=0; i<(b-a); i++)
            {
                s+= "1";
            }
        }else if(b<a)
        {
            for(int i=0; i<b; i++)
            {
                s += "1";
                s+= "0";
            }

            for(int i=0; i<(a-b); i++)
            {
                s+= "0";
            }
        }else
        {
            for(int i=0; i<a; i++)
            {
                s+= "0";
                s+= "1";
            }
        }

        cout << s << endl;
    }
}