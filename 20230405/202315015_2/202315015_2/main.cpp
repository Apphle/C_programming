#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x;
	int y;
	int result;

	printf("������ �Է��Ͻÿ�(�� : 2 + 5) >> ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		result = x + y;
	else if (op == '-')
		result = x - y;
	else if (op == '*')
		result = x * y;
	else if (op == '/')
		result = x / y;
	else if (op == '%')
		result = x % y;
	else 
		printf("�������� �ʴ� �������Դϴ�. \n");

	printf("%d %c %d = %d \n", x, y, result);

	return 0;
}