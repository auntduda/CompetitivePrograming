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

char mat[1002][1002];
int n, m;

bool visited(int i, int j)
{
    if((i<0 || i>=n) || (j<0 || j>=m) || (mat[i][j] == 'X' || mat[i][j] == '#')) return false;

    return true;

}

int32_t main(){ optimize;

    map<pii, char> path;
    cin >> n >> m;

    queue<pair<pii, int >> fila;
    pii fim;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mat[i][j];

            if(mat[i][j]=='A')
            {
                // cout << i << " " << j << endl;

                fila.push({{i,j}, 0});
                path[{i,j}] = 'A';

                mat[i][j] = 'X';
            }
            if(mat[i][j] == 'B')
            {
                fim = {i,j};
            }
        }
    }

    int ans=oo;
    bool found = false;

    while(fila.size()!=0)
    {
        auto [i,j] = fila.front().first;

        int dist = fila.front().second;


        if(mat[i][j] == 'B') 
        {
            found = true;
            ans = min(ans,dist);
        }

        fila.pop();
        mat[i][j] = 'X';

        if(visited(i+1, j))
        {
            path[{i+1,j}] = 'D';
            fila.push({{i+1,j}, dist+1});
        }
        if(visited(i-1, j))
        {
            path[{i-1,j}] = 'U';
            
            fila.push({{i-1,j}, dist+1});
        }
        if(visited(i, j+1))
        {
            path[{i,j+1}] = 'R';
            
            fila.push({{i,j+1}, dist+1});
        }
        if(visited(i, j-1))
        {
            
            path[{i,j-1}] = 'L';
            fila.push({{i,j-1}, dist+1});
        }

        // for(int i=0; i<n; i++)
        // {
        //     for(int j=0; j<m; j++)
        //     {
        //         cout << mat[i][j] << " ";            
        //     }
        //     cout << endl;
        // }
            
        // cout << endl;
    }

    vector<char> resp;

    int i, j;
    i = fim.first;
    j = fim.second;

    if (!found) {
        cout << "NO\n";
    }

    while(path[{i,j}] != 'A'){
        resp.pb(path[{i,j}]);

        // cout << i << " " << j << endl;

        if(path[{i,j}]== 'L')
        {
            j++;   
        }else if(path[{i,j}]== 'R')
        {
            j--;
        }else if(path[{i,j}]== 'U')
        {
            i++; 
        }else if(path[{i,j}]== 'D')
        {
            i--;   
        }
    }

    reverse(all(resp));

    if(resp.size()>0)
    {
        cout << "YES\n" << resp.size() << endl;

        for(int k=0; k<resp.size(); k++) cout << resp[k];

        cout << endl;
    }else{
        cout << "NO\n";
    }

    return 0;
}