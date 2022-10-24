#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	int n, m, i;
	scanf("%d %d", &n, &m);

	char ascii[256], a, b, lixo;
	for(i = 0; i < 256; i++)
		ascii[i] = char(i);

    scanf("%c", &lixo);
	for(i = 0; i < n; i++){
		scanf("%c%c%c", &a, &lixo, &b);
		scanf("%c", &lixo);
		
		ascii[int(a)] = b;
		ascii[int(b)] = a;
	}

	for(i = 0; i < m; i++){
		char frase[100010];
		scanf (" %[^\n]", frase);
    
		int j;
		for(j = 0; j < strlen(frase); j++){
			printf("%c", ascii[(int)frase[j]]);
		}
		printf("\n");

	}

	return 0;
}