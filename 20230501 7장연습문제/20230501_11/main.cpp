#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, total = 100;

	while (1)
	{
		printf("���� ���ᷮ %d\n",total);
		printf("���� ������ +, �Ҹ�� -�� �Է��� �ּ���: \n\n");
		scanf("%d", &x);
		total += x;

		
		if (total < 20)
		{
			printf("���� ���ᷮ %d\n", total);
			printf("(���) ���ᰡ 20���� �̸��Դϴ�.");
			printf("���� ������ +,�Ҹ�� -�� �Է��� �ּ���:");
			break;
		}
	}
	return 0;
}