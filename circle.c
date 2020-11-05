#include<stdio.h>

int main(){
	
	int radius;
	double area;
	
	printf("원의 반지름을 입력하시오.\n");
	scanf("%d", &radius);
	
	area = radius*radius*3.141592;
	
	printf("원의 넓이: %.1f\n", area);

	return 0;
}
