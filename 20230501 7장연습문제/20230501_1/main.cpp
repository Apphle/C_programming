#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void)
{
	int num = 0, x = 0;

	printf("ī��Ʈ�� �ʱⰪ�� �Է��Ͻÿ�(����: ��): ");
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