#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char e = 0;

	printf("������ �� �Է��Ͻÿ�: ");
	scanf("%c", &e);

	if (e >= 'A' && e <= 'Z')
	{
		printf("%c�� �빮�� �Դϴ�.", e);
	}
	else if (e >= 'a' && e <= 'z')
	{
		printf("%c�� �ҹ��� �Դϴ�.", e);
	}
	else
	{
		printf("%c�� �����ڰ� �ƴմϴ�.", e);
	}
}