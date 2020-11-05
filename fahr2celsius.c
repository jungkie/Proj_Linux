#include<stdio.h>

int main(void){

	int fahr, celsius;
	
	fahr = 100;
	//celsius = 0.55 * (fahr - 32);
	//celsius = 5.0/9.0 * (fahr - 32);
	celsius = 5 * (fahr - 32)/9;
	
	printf("fahr: %d ---> celsius: %d\n",fahr,celsius);
	
	return 0;
}
