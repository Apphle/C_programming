#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4, x5;

	x1 = 0;
	x2 = 1;

	printf("�� ��° �ױ��� ���ұ��? \n");
	scanf("%d", &x4);

	for (x5 = 0;x5 <= x4 ;x5++)
	{
		printf("%d\n",x1);
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;

	}
}