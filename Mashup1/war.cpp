#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int main()
{
    string ai, phone;
    int pos, ans=0;

    cin >> ai;
    cin >> phone;

    pos = ai.find(phone);

    while(pos!=-1)
    {
        ans++;
        ai[pos] = '#';
        //printf("pos=%d\n", pos);
        pos = ai.find(phone);
    }

    printf("%d\n", ans);

    return 0;
}