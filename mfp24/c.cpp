#include <bits/stdc++.h>

using namespace std;

#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

int tb[1000003];
int n;
vector<int> moedas;

int dp(int i){
	if(i > ((1<<n)-1))
		return 0;
	if(tb[i] != 0)
		return tb[i];

    // cout << "PRINT2k: " << dp((2*i)) << endl;
    // cout << "PRINT2k1: " << dp((2*i)+1) << endl;

	tb[i] += max(dp((2*i)) + moedas[i], dp((2*i)+1) + moedas[i]);

    // cout << "PRINT: " << tb[i] << endl; 
	return tb[i];
}
 
int main() { optimize;

    memset(tb,0,sizeof(tb));
 
    cin >> n;

    moedas.push_back(0);

    for(int i=0; i<((1<<n)-1); i++)
    {
        int m; cin >> m;

        moedas.push_back(m);
    }

    int ans = dp(1);

    cout << ans << endl;
 
    return 0;
}