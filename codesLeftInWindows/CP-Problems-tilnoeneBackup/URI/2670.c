#include <stdio.h>

int min(int a, int b){
	if(a > b) return b;
	return a;
}

int main(){
    int a[3], t1, t2, t3;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    
    t1=a[1]*2+a[2]*4;
    t2=a[0]*2+a[2]*2;
    t3=a[0]*4+a[1]*2;
    
    printf("%d\n", min(min(t1, t2), t3));
    
    return 0;
}