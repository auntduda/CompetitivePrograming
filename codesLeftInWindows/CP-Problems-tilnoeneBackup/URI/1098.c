#include <stdio.h>
#include <math.h>

int main(){
    double i, j;
	int k=0;
    for(i=0;i<=2;i+=0.2){
		if(k==0 || k==5 || k==10){
			printf("I=%.0lf J=%.0lf\n", i, i+1);
			printf("I=%.0lf J=%.0lf\n", i, i+2);
			printf("I=%.0lf J=%.0lf\n", i, i+3);
		} else{
			printf("I=%.1lf J=%.1lf\n", i, i+1);
			printf("I=%.1lf J=%.1lf\n", i, i+2);
			printf("I=%.1lf J=%.1lf\n", i, i+3);
		}
		k++;
    }
    return 0;
}