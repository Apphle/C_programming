#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void)
{
	int num = 0, x = 0;

	printf("카운트의 초기값을 입력하시오(단위: 초): ");
	scanf("%d", &num);

	for (x = num; x >= 0; x--)
	{
		printf("%d \n",x);
		Sleep(1000);
	}
	if (x == 0)
	{
		printf("\a");
	}
}