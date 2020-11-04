#include<stdio.h>

/*

헬로 월드를 출려가는 아홉가지 방법

1번. 화이트북 에쪠 방식

main(void){
	printf("hello, world\n");
	}
*/

//2번.

int main(void)
{
	printf("hello, world\n");
	return 0;	
}
	
/*	
3번. 올드한 스타일  펌웨어 개발자 혹은 전자과 인가? 싶어지는 방식

void main(void){
	printf("hello, world\n");
	}	
	
	
4번. 안좋은 예시(함수 호출은 최소화)

int main(void)
{
	printf("hello, ");
	printf("world");
	printf(\n);
	return 0;
	}	
	
	
5번. 문자열이 너무 길때 방식
	int main(void){
	printf("hello,"
	 		"world\n"
	 		);
	return 0;	
	}
	

6번. 배열 상용 방식
	
	int main(void)
	{
		char str[] = "hello, world'; // str[] 배열
	printf("%s\n",str); // %s string 형식지정자
	return 0;
	}
	
	
7번. 포인터 사용 방식
	6번보다 이거를  쓰시오

int main(void)
{
	char *str = "hello, world"; //포인터
	printf("%s\n",str);
	return 0;
	}	
	

8번.

int main(void)
{
	printf("%s\n","hello, world);
	return 0;
		}	
	
	
9번.

int main(void)
{
	fprintf(stdout,"hello, world\n"); //'f'printf,f = file
	return 0;
	}	

	
	*/
