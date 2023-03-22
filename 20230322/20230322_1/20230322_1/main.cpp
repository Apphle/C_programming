// 정수 간의 가감승제를 계산하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	
	/*int x; //첫번째 정수를 저장할변수
	int y; 
	int sum, diff, mul, div;

	x = 20;
	y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);
	printf("두수의 몫: %d\n", div);
	*/


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	int x; //첫번째 정수를 저장할변수
	int y;
	int sum, diff, mul, div;
	
	printf("x값: ");
	scanf("%d", &x);
	printf("y값: ");
	scanf("%d", &y);
	
	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;
	
	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);
	printf("두수의 몫: %d\n", div);
	
	return 0;
}