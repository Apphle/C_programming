#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	/*
	int x;
	int y;

	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	scanf("%d%d", &x, &y);

	printf("x == y�� �����:%d\n", x == y);
	printf("x != y�� �����:%d\n", x != y);
	printf("x > y�� �����:%d\n", x > y);
	printf("x < y�� �����:%d\n", x < y);
	printf("x >= y�� �����:%d\n", x >= y);
	printf("x <= y�� �����:%d\n", x <= y);

	return 0;
	*/
	//////////////////////////////////////////////////////////////
	int x;
	int y;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &x, &y);

	printf("%d && %d�� �����:%d\n", x, y, x && y);
	printf("%d || %d�� �����:%d\n", x, y, x || y);
	printf("!%d�� �����:%d\n", x, !x);

	return 0;


}