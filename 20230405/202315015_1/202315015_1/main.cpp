////////////////////////////////// �������� �ϱ����� �и� 0������ if-else ���� �̿��Ͽ� �˻�//////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int d;
	int result;

	printf("���ڿ� �и� �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &d);

	if (d == 0)
	{
		printf("0���� ���� ���� �����ϴ�.\n");
	}

	else
	{
		result = n / d;
		printf("����� %d �Դϴ�.\n", result);
	}

	return 0;
}
//////////////////////////////////////////// if ���� ����Ͽ� Ȧ���� ¦���� �����ϴ� ���α׷�////////////////////////////////////////////////////////////
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n");

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

	printf("������ ����=%c\n", data);

	encrpted_data = data ^ key;
	printf("��ȣȭ�� ����=%c \n", encrpted_data);

	orig_data = encrpted_data ^ key;
	printf("������ ����=%c\n", orig_data);

	return 0;
}
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	unsigned int num;
	printf("������: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("������: ");

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