#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	////////////////////////// switch 문 /////////////////////////////
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	switch (num % 2)
	{
		case 0:
			printf("짝수 입니다.");
			break;
		case 1:
			printf("홀수 입니다.");
			break;
	}
	///////////////////////////////////////////////////////////////

	///////////////////////////// if문  ///////////////////////////
	/*
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("입력하신 정수는 짝수 입니다.");
	}
	else
	{
		printf("입력하신 정수는 홀수 입니다.");
	}
	*/
	////////////////////////////////////////////////////////
}