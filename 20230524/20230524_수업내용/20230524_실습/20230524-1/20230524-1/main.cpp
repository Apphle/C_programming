// �̷������Ƽ���а�  202315015  ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n < 0)
		return n * (-1);
	else
		return n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	int a, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("even �� ����� %d \n\n", even(n));
	
	printf("absolute �� ����� %d\n\n", absolute(n));

	printf("sign �� ����� %d \n\n", sign(n));
}