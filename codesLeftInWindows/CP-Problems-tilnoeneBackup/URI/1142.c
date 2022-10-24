#include <stdio.h>

int main(){
    int n;
	scanf("%d", &n);
    int l=1, i=0;
    for(i=0;i<n;i++){
		printf("%d %d %d PUM\n", l, l+1, l+2);
        l+=4;
    }

    return 0;
}