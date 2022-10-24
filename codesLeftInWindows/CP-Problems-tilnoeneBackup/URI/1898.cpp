#include <iostream>

using namespace std;

string retiraLetras(string frase){
	string res = "";
	int pontos = 0, it = 0;

	for(int i = 0; i < frase.size(); i++){
	    
		if(isdigit(frase[i]) && it < 2){
			res += frase[i];
		} else if(frase[i] == '.'){
		    pontos++;

		    if(pontos == 1){
		        res += '.';
		    }
		}
		
		if(pontos == 1 && isdigit(frase[i])){
            it++;
		} else if(pontos > 1){
		    it = 3;
		}
	}

	return res;
}

int main(){
    string l1, l2;
    getline(cin, l1);
    getline(cin, l2);
    
    string a = retiraLetras(l1);
    string b = retiraLetras(l2);
    
    string cpf = "", n1 = "", n2 = "";
    
    for(int i = 0; i < 11; i++){
        cpf += a[i];
    }
    
    for(int i = 11; i < a.size(); i++){
        n1 += a[i];
    }
    
    for(int i = 0; i < b.size(); i++){
        n2 += b[i];
    }
    
    double v1 = 0, v2 = 0;
    
    if(n1.size() > 0) v1 = stod(n1);
    if(n2.size() > 0) v2 = stod(n2);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "cpf " << cpf << endl;
    cout << v1 + v2 << endl;
    
    return 0;
}