#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("����� ������ �Է� �Ͻÿ�:");
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("����� ������ �ٷ� !!! A �Դϴ�.");
	}
	else if (89 >= num && num > 80)
	{
		printf("����� ������ �ٷ� !!! B �Դϴ�.");
	}
	else if (79 >= num && num > 70)
	{
		printf("����� ������ �ٷ� !!! C �Դϴ�.");
	}
	else if (69 >= num && num > 60)
	{
		printf("����� ������ �ٷ� !!! D �Դϴ�.");
	}
	else
	{
		printf("����� ������ �ٷ� !!! F �Դϴ�.");
	}
}