#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string p;
		cin >> p;

		int a = 0, b = 0, it = 1;
		while(p[it] == 'a'){
			a++;
			it++;
		}

		it += 3;

		while(p[it] == 'a'){
			b++;
			it++;
		}

		cout << 'k';
		for(int i = 0; i < a*b; i++){
			cout << 'a';
		}
		cout << endl;

	}

	return 0;
}