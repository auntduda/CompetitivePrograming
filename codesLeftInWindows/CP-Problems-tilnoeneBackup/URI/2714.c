#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);

	while(n--){
		char l[64];
		scanf("%s", l);

		if(l[0] == 'R' && l[1] == 'A' && strlen(l) == 20){
			char res[64];
			int des = 0, j;

			for(j = 2; j < strlen(l); j++){
				if(l[j] != '0'){
					des = 1;
				}

				if(des == 1){
					printf("%c", l[j]);
				}

			}

			printf("\n");

		} else{
			printf("INVALID DATA\n");
		}

	}

	return 0;
}