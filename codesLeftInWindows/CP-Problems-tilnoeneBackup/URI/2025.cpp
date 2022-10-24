#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    string frase;
    while(n--){
    	getline(cin, frase);

    	for(int i = 1; i < frase.size()-7; i++){
    		if(frase[i] == 'o' && frase[i+1] == 'u' && frase[i+2] == 'l' && frase[i+3] == 'u' && frase[i+4] == 'p' && frase[i+5] == 'u' && frase[i+6] == 'k' && frase[i+7] == 'k'){
    			if(i >= 10){
                    
                    if(frase[i-1] != 'i' or frase[i-2] != 'k' or frase[i-3] != 'k' or frase[i-4] != 'u' or frase[i-5] != 'p' or frase[i-6] != 'u' or frase[i-7] != 'l' or frase[i-8] != 'u' or frase[i-9] != 'o' && frase[i-10] != 'J'){
                        frase[i-1] = 'J';
            		    frase[i+8] = 'i';
            		    
                        i += 7;
                    }
                    
    			} else{
            		frase[i-1] = 'J';
            		frase[i+8] = 'i';
                    
        			i += 7;
    			}
    		}
    	}

    	cout << frase << endl;
    	
    }

    return 0;
}