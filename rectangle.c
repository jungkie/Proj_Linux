#include<stdio.h>

int main(){

	int width, height;
	double area;
	
	printf("사각형의 밑변을 입력하시오.\n");
	scanf("%d", &width);
	printf("사각형의 높이를 입력하시오.\n");	
	scanf("%d", &height);
		
	area = width*height;
	
	printf("사각형의 넓이: %.1f\n", area);

	return 0;
}
