#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define ld long double
#define ll long long
#define int long long
#define pii pair<int, int>
#define tii tuple<int, int, int>

using namespace std;

vector<string> split(string txt, char key = ' '){
    vector<string> ans;
    
    string palTemp = "";
    for(int i = 0; i < txt.size(); i++){
        
        if(txt[i] == key){
            if(palTemp.size() > 0){
                ans.push_back(palTemp);
                palTemp = "";
            }
        } else{
            palTemp += txt[i];
        }
        
    }
    
    if(palTemp.size() > 0)
        ans.push_back(palTemp);
    
    return ans;
}

bool valid(int& a, int& b, int preva, int prevb, int i) {
  // bob saca
  if ((a + b) % 4 == 1 || (a + b) % 4 == 2) swap(a, b); 

  if (a >= preva && b >= prevb) return true;

  return false;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n; cin >> n;

  string s; cin >> s;
  vector<string> v = split(s, '-');

  int a = stoi(v[0]);
  int b = stoi(v[1]);
  bool cannot_change = false;

  if ((a == 11 || b == 11)) {
    cannot_change = true;
  }

  // bob saca
  if ((a + b) % 4 == 1 || (a + b) % 4 == 2) swap(a, b); 

  int preva = a, prevb = b;

  for (int i = 2; i <= n; i++) {
    string s; cin >> s;
    vector<string> v = split(s, '-');

    int a = stoi(v[0]);
    int b = stoi(v[1]);

    if (!valid(a, b, preva, prevb, i)) {
      cout << "error " << i << '\n';
      return 0;
    }

    if (cannot_change && (a != preva || b != prevb)) {
      cout << "error " << i << '\n';
      return 0;
    }

    if ((a == 11 || b == 11)) {
      cannot_change = true;
    }
    preva = a;
    prevb = b;
  }

  cout << "ok\n";

  return 0;
}
