#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> fib = {1, 1, 2}, thr;

ll ctoi(char n){ return (int)n - 48; }

void nextFib(){
	fib.push_back(fib[fib.size()-1] + fib[fib.size()-2]);
}

bool threebonacci(ll num){
	string n = to_string(num);
	ll soma = 0, qnt3 = 0;

	for(ll i = 0; i < n.size(); i++){
		if(n[i] == '3') qnt3++;
		soma += ctoi(n[i]);
	}

	if(soma % 3 == 0 or qnt3 > 0)
		return true;
	return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    while(cin >> n){

    	while(thr.size() < n){
    		nextFib();

    		if(threebonacci(fib[fib.size()-1]))
    			thr.push_back(fib[fib.size()-1]);
    	}

    	cout << thr[n-1] << endl;

    }


    return 0;
}