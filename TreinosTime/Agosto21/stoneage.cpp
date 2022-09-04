#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e5 + 17;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q, op=0, i=0; bool flag=false;
  cin >> n >> q;
  long long int sum = 0, ant=0, val;
  vector<long long int> v(MAX);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
  }

  while (q--) {
    
    cin >> op;/*
    set<int> s;*/

    if (op == 1) {
      cin >> i >> val;
      i--;
    /*
      atual = v[i];

      if (!s.count(i)) {
        if (atual != 0) {
          v[i] = atual;
          s.insert(i);
        }
      }*/
        if(flag)
        {
            sum += (val - ant);
            ant=val;
        }else
        {
            sum += (val - v[i]);
            v[i] = val;
        }

        flag=false;
    }
    if (op == 2) {
      cin >> val;
      sum = val * n;
      ant = val;
      flag=true;
    }

    cout << sum << endl;
  }

  return 0;
}