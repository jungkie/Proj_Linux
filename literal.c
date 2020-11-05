#include<stdio.h>

int main(){

	//printf("%c %c %c\n", 65, 97, 48);
	printf("%c %c %c\n", 'A', 'a', '0');
	printf("%c %c %c\n", 'A', 'A' + 1 , 'A' + 2);

	printf("%d %d %d\n", 'A', 'a', '0');
	
	printf("%d %d %d\n", 100, 0144, 0x64);
	printf("%d 0%o 0x%x\n", 100, 100, 100); //decimal(10), dctal(8), hexa-decimal(16)

	printf("%lld \n", 10000000000LL);
	
	printf("%f %f\n", 3.141592, 2.718f);
	
	printf("%s\n", "abcd");
	return 0;
}
