#include<stdio.h>

int main(){

	int width, height;
	double area;
	
	printf("삼각형의 밑변을 입력하시오.\n");
	scanf("%d", &width);
	printf("삼각형의 밑변을 입력하시오.\n");	
	scanf("%d", &height);
	
	area = width*height/2.0 ;
	printf("삼각형의 넓이: %.1f\n", area);
	
	return 0;
}
