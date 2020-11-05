#include<stdio.h>

int main(void){

	int fahr;
	double celsius;
	
	//fahr = 100;
	scanf("%d", &fahr);
	celsius = 5.0/9.0*(fahr - 32);
	
	printf("fatr: %d --> celsius: %f\n",fahr,celsius);

	return 0;
}
