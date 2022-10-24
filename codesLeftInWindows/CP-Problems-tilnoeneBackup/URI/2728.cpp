#include <iostream>
#include <vector>

using namespace std;

int main(){
	string txt, cobol = "COBOL";

	while(cin >> txt){
		vector<string> pal;
		string temp = "";

		for(int i = 0; i < txt.size(); i++){
			if(txt[i] != '-'){
				temp += txt[i];
			} else{
				pal.push_back(temp);
				temp = "";
			}
		}
		pal.push_back(temp);

		bool existe = true;
		for(int i = 0; i < pal.size(); i++){
			if(toupper(pal[i][0]) != cobol[i] && toupper(pal[i][pal[i].size()-1]) != cobol[i]){
				existe = false;
				break;
			}
		}

		if(existe) cout << "GRACE HOPPER" << endl;
		else cout << "BUG" << endl;

	}

	return 0;
}