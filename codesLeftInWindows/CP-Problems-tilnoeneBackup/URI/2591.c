#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		char p[256];
		scanf("%s", p);

		int a = 0, b = 0, i, it = 1;
		while(p[it] == 'a'){
			a++;
			it++;
		}

		it += 3;

		while(p[it] == 'a'){
			b++;
			it++;
		}

		printf("k");
		for(i = 0; i < a*b; i++){
			printf("a");
		}
		printf("\n");

	}

	return 0;
}