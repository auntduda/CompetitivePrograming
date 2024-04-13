#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    vector<pair<long long,long>> pontos;

    for(int i=0; i<4; i++)
    {
        long long x, y; cin >> x >> y;

        pontos.push_back(make_pair(x,y));
    }

    sort(pontos.begin(), pontos.end());

    long long a = abs(pontos[1].second-pontos[0].second);
    long long l = abs(pontos[2].first-pontos[0].first);

    cout << (a*l) << "\n";
 
    return 0;
}