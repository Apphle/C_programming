#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int drink = 500;
	int num = 0;

	printf("투입한 동전의 금액을 적으시오:");
	scanf("%d", &num);

	if (num == drink)
	{
		printf("선택하신 음료수가 나왔습니다.\n\n");
	}
	else if (num < drink)
	{
		printf("투입한 금액이 음료수 가격보다 적어 %d원이 반환되었습니다.\n\n", num);
	}
	else
	{

	}
}