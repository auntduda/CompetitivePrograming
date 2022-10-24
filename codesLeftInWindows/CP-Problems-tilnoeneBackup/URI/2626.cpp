#include <iostream>

using namespace std;

int jogo(int a, int b){
    if(a-b==2) return 2;
    if(a-b==-2) return 1;
    if(a-b==1) return 1;
    if(a-b==-1) return 2;
    return 0;
}

int main() {
	string a, b, c;
	while(cin >> a){
	    cin >> b >> c;
        // pedra >> tesoura >> papel
        // 3 >> 2 >> 1;
        int j1, j2, j3;
        if(a=="pedra") j1=3;
        else if(a=="tesoura") j1=2;
        else if(a=="papel") j1=1;
        
        if(b=="pedra") j2=3;
        else if(b=="tesoura") j2=2;
        else if(b=="papel") j2=1;
        
        if(c=="pedra") j3=3;
        else if(c=="tesoura") j3=2;
        else if(c=="papel") j3=1;
        
        int win = -1;
        if(a==b or b==c or a==c){
            if(jogo(j1, j2)==1){
                if(jogo(j1, j3)==1) win = 1;
                else if(jogo(j1, j3)==2) win = 3;
            } else if(jogo(j1, j2)==2){
                if(jogo(j2, j3)==1) win = 2;
                else if(jogo(j2, j3)==2) win = 3;
            } else{
                if(jogo(j1, j3)==2) win = 3;
            }
	}
        if(win==1) cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if(win==2) cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if(win==3) cout << "Urano perdeu algo muito precioso..." << endl;
        else cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        
	}
	
    return 0;
}