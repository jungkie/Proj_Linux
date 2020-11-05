#include<stdio.h>

int main(void){

	int farh;
	scanf("%d", &farh);

	int left, right;
	
	left = 5*(farh-32)/9;
		//printf("left = %d\n", left);
	right = ((1000*5*(farh-32)/9 - 1000*left) +5)/10;
	// 소숫점 3째자리에서 반올림하기 위해 1,000을 곱해 소숫점 3째자리까지를 정수로 끌어올려 계산한다.
	//5를 더해고 한자리 올리기 위해 10을 곱한다.
		//printf("right = %d\n", right);
	
	printf("farh: %d --> celsius: %d.%d\n", farh, left, right);

	return 0;

}
