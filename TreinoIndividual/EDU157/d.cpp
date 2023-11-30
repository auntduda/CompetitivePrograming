#include<bits/stdc++.h>

#define int long long
#define MOD 1000000007
#define INF 0x3F3F3F3F3F3F3F3F
#define pb push_back
#define endl "\n"
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int32_t main()
{
    optimize;
    int n; cin >> n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n-1; i++) cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        vector<int> ans;
        ans.pb(i);
        map<int,int> m;
        m[i] = 1;
        
        for(int j=0; j<n; j++)
        {
            
            int diff = abs(ans[j]-arr[i]);
            int p1 = ans[j]+diff; int p2 = abs(ans[j]-diff);
            
            cout << "i: " << i << " j: " << j << endl;
            cout << "ans[j]: " << ans[j] << " arr[i]: " << arr[i] << endl;
            cout << "p1: " << p1 << " p2: " << p2 << endl;
            
            if(arr[i]==p1 && m.find(p1)!=m.end())
            {
                ans.pb(p1);
                m[p1]=1;
            }else if(arr[i]==p2 && m.find(p2)!=m.end())
            {
                ans.pb(p2);
                m[p2] = 1;
            }else
            {
                cout << "vector ans:" << endl;
                for(auto e : ans) cout << e << " ";
                cout << endl;
                
                continue;    
            }
            
            // if(m.find(p1)!=m.end())
            // {
            //     ans.pb(p1);
            //     m[p1]=1;
            // }
            // else if(m.find(p2)!=m.end())
            // {
            //     ans.pb(p2);
            //     m[p2] = 1;
            // }
            // else
            // {
            //     continue;
            // }
            
        }
        
        
        if(ans.size()==n)
        {
            cout << "entrei uma vez" << endl;
            break;
        }
    }
    
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// eu odeio competitiva, fodase tudo nesse cacete

#include<bits/stdc++.h>

#define int long long
#define MOD 1000000007
#define INF 0x3F3F3F3F3F3F3F3F
#define pb push_back
#define endl "\n"
#define optimize std::ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int n;
vector<int> ans; // vetor onde ficara a resposta
vector<int> arr(200002); // vetor dado na entrada para comparar na dp
int aux[400002]; // vetor onde vou armazenar os valores que ja coloquei em ans porque cada um so aparece 1x

bool dp(int sz, int i)
{
    if(sz==n) return true;
    
    // testando dois valores pra colocar em ans porque descobri um negocio legal do xor
    int diff = abs(ans[i]-arr[i]);
    int p1 = arr[i]+diff; int p2 = abs(arr[i]-diff);
    
    cout << "i: " << i << "\np1: " << p1 << " p2: " << p2 << endl;
    
    
    if(aux[p1]!=1)
    {
        // p1 eh um possivel numero de se colocar em ans
        aux[p1]=1;
        ans.pb(p1);
    }else if(aux[p2]!=1)
    {
        // p2 eh um possivel numero de se colocar em ans
        
        aux[p2]=1;
        ans.pb(p2);
    }else
    {
        // nenhum dos dois numeros deu certo e voce tem que tentar outro comeco de ans
        return false;
    }

    i++;
    
    for(auto e : ans) cout << e << " ";
    cout << endl;
    
    return dp(sz, i);
}

int32_t main()
{
    optimize;
    cin >> n;
    
    for(int i=0; i<n-1; i++) cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        ans.pb(i);
        
        bool resp = dp(ans.size(), 0); // tamanho do vetor de resposta, posicao em que comecamos a analisar arr
    
        if(resp)
        {
            // deu pra fazer uma resposta
            // for(auto e : ans) cout << e << " ";
            // cout << endl;
            
            cout << "achei uma resposta\n";
            
            return 0;
        }else
        {
            // a dp que rodei comecando ans em i nao deu certo e tenho que tentar outro comeco
            ans.clear();
            memset(aux, 0, sizeof(int));
        }
        
    }
    
    return 0;
}