#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	
	int num1 = 0;
	char a;

	printf(" 1과 2중 하나의 수를 입력하시오:\n");
	scanf("%d", &num1);

	switch (num1)
	{
	case 'a':
		printf("1을 입력하였습니다.\n");
		break;
	case 'b':
		printf("2을 입력하였습니다.\n");
		break;
	default:
		printf("1 과 2 이외의 수를 입력하였습니다.")
		break;
	}

	*/
	/*
	if (num1 == 1)
	{
		printf(" 1을 입력하셨습니다.\n");
	}
	else if (num1 == 2)
	{
		printf(" 2를 입력하셨습니다.\n");
	}
	else
	{
		printf(" 1과 2 이외의 다른 수가 입력되었습니다.\n");
	}
	*/
}