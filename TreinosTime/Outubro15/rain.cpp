#include<bits/stdc++.h>

using namespace std;

#ifndef M_PI
#    define M_PI 3.14159265358979323846
#endif


int main()
{
    double d, h, v, e;

    scanf("%lf %lf %lf %lf", &d, &h, &v, &e);

    double ans=0;

    double circle = (d/2)*(d/2)*M_PI;

    double speed = v/(circle);

    if(speed>=e)
    {
        printf("YES\n%lf\n", h/(((4*v)/M_PI*(d*d))-e));
    }else
    {
        printf("NO\n");
    }

    return 0;
}