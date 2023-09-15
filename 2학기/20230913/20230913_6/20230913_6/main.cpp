#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ChangePlusOne(int* p) 
{
	*p = *p * 2;
}

int main(void) 
{
	int num;

	printf("숫자 입력 :");
	scanf("%d", &num);

	ChangePlusOne(&num);
	printf("%d\n", num);

	return 0;
}