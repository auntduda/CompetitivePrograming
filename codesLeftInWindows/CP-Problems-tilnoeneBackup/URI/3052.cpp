#include <iostream>

using namespace std;

void chuva(char p[512][512], int n, int m, int i, int j){
	if(p[i][j]=='o'){
		if(i!=n-1){
			if(j==0 or j==m-1){
				if(p[i+1][j]=='.'){
					p[i+1][j]='o';
					chuva(p, n, m, i+1, j);
				}
			} else{
				if(p[i+1][j]=='.'){
					p[i+1][j]='o';
					chuva(p, n, m, i+1, j);	
				} else{
					if(p[i][j+1]=='.' && p[i+1][j]=='#'){
						p[i][j+1]='o';
						chuva(p, n, m, i, j+1);
					}
					if(p[i][j-1]=='.' && p[i+1][j]=='#'){
						p[i][j-1]='o';
						chuva(p, n, m, i, j-1);
					}
				}
			}
		} 
	}
}

int main(){
	int n, m;
	char p[512][512];
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> p[i][j];
		}
	}
	
	for(int j=0;j<m;j++){
		if(p[0][j]=='o'){
			chuva(p, n, m, 0, j);
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << p[i][j];
		}
		cout << endl;
	}
	
	return 0;
}