#include<stdio.h>

int main(void){

	int celsius;
	scanf("%d", &celsius);
	
	double farh;
	farh = 9.0/5.0*celsius + 32;
	
	printf("celsius: %d --> farh: %.1f\n",celsius, farh);

	return 0;
} 
