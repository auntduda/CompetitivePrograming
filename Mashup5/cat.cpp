#include<bits/stdc++.h>

using namespace std;

//#define long long int long long int
//#define pb v.push_back()

int main()
{
    long long int f, r, c, min_weeks, lefts=-16548;
    bool igual=false;

    scanf("%lld %lld %lld", &f, &r, &c);

    char week[7] = {'f', 'f', 'r', 'c', 'f', 'c', 'r'}; char falta;

    long long int weeks_fish = f/3; long long int weeks_rabbit = r/2; long long int weeks_chicken = f/2;

    if(weeks_fish<weeks_rabbit && weeks_fish<weeks_chicken)
    {
        falta = 'f';
        min_weeks = f/3;
    }else if(weeks_rabbit<weeks_fish && weeks_rabbit<weeks_chicken)
    {
        falta = 'r';
        min_weeks = r/2;   
    }else if(weeks_chicken<weeks_fish && weeks_chicken<weeks_rabbit){
        falta = 'c';
        min_weeks = c/2;
    }else{
        lefts=0;
        min_weeks=f/3;
    }

    
        for(int i=6; i>=0; i--)
        {
            if(week[i]==falta)
            {
                lefts = 7-i;
            }
        }

        printf("%lld\n", (7*min_weeks + lefts));

    return 0;
}