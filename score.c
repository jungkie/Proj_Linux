#include<stdio.h>

int main(){

	int kor, eng, mat, sum;
	double average;

	printf("국어 성적을 입력하시오.\n");
	scanf("%d", &kor);
	printf("영어 성적을 입력하시오.\n");
	scanf("%d", &eng);
	printf("수학 성적을 입력하시오.\n");
	scanf("%d", &mat);
	
	sum = kor + eng + mat;
	average = sum/3.0;
	
	printf("총합; %d\n"
			"평균: %.1f\n", sum, average);
	
	return 0;
}
