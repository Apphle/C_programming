////////////////////////////////// 나눗셈을 하기전에 분모가 0인지를 if-else 문을 이용하여 검사//////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int d;
	int result;

	printf("분자와 분모를 입력하시오: ");
	scanf("%d %d", &n, &d);

	if (d == 0)
	{
		printf("0으로 나눌 수는 없습니다.\n");
	}

	else
	{
		result = n / d;
		printf("결과는 %d 입니다.\n", result);
	}

	return 0;
}
//////////////////////////////////////////// if 문을 사용하여 홀수와 짝수를 구별하는 프로그램////////////////////////////////////////////////////////////
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("입력된 정수는 짝수입니다.\n");
	else
		printf("입력된 정수는 홀수입니다.\n");

	return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include <stdio.h>

int main(void)
{
	char data = 'a';
	char key = 0xff;
	char encrpted_data, orig_data = 0;

	printf("원래의 문자=%c\n", data);

	encrpted_data = data ^ key;
	printf("암호화된 문자=%c \n", encrpted_data);

	orig_data = encrpted_data ^ key;
	printf("복원된 문자=%c\n", orig_data);

	return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	unsigned int num;
	printf("십진수: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("이진수: ");

	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask  >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");

	return 0;
}
*/