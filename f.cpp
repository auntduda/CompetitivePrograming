#include <bits/stdc++.h>
using namespace std;

#define int long long
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define MOD 1000000007
#define sqr(x) ((x) * (x))
#define _init(x) memset(x,-1,sizeof(x))
#define all(x) (x).begin(), (x).end()
#define FOR(i, j, n) for (int i = j; i < n; i++)
#define qle(i, n) (i == n ? "\n" : " ")
#define endl "\n"
const int oo = 1e9;
const int MAX = 1e6+7;

#define vp vector<point>
#define ld long double
const ld EPS = 1e-6;
const ld PI = acos(-1);

// typedef ll cod;
// bool eq(cod a, cod b){ return (a==b); }
typedef ld cod;
bool eq(cod a, cod b){ return abs(a - b) <= EPS; }

struct point{
    cod x, y;
    int id;
    point(cod x=0, cod y=0): x(x), y(y){}

    point operator+(const point &o) const{ return {x+o.x, y+o.y}; }
    point operator-(const point &o) const{ return {x-o.x, y-o.y}; }
    point operator*(cod t) const{ return {x*t, y*t}; }
    point operator/(cod t) const{ return {x/t, y/t}; }
    cod operator*(const point &o) const{ return x * o.x + y * o.y; }
    cod operator^(const point &o) const{ return x * o.y - y * o.x; }
    bool operator<(const point &o) const{
        return (eq(x, o.x) ? y < o.y : x < o.x);
    }
    bool operator==(const point &o) const{
        return eq(x, o.x) and eq(y, o.y);
    }
	friend ostream& operator<<(ostream& os, point p) {
		return os << "(" << p.x << "," << p.y << ")"; }
};

int ccw(point a, point b, point e){ // -1=dir; 0=collinear; 1=esq;
    cod tmp = (b-a) ^ (e-a); // vector from a to b
    return (tmp > EPS) - (tmp < -EPS);
}


int32_t main(){ optimize;

    int n; cin >> n;

    vp p(n);

    for(int i=0; i<n; i++)
    {
        int x, y; cin >> p[i].x >> p[i].y;
    }

    if(p.size() < 4)
    {
        cout << 0 << endl;
        return 0;
    }

    int ans=0;

    for(int i=0; i<p.size(); i++)
    {
        for(int j=i+1; j<p.size(); j++)
        {
            for(int k=j+1; k<p.size(); k++)
            {
                for(int l=k+1; l<p.size(); l++)
                {
                    if(ccw(p[i], p[j], p[k]) != 0 && ccw(p[i], p[j], p[l]) != 0 && ccw(p[i], p[k], p[l]) != 0 && ccw(p[k], p[j], p[l]) != 0)
                    {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}