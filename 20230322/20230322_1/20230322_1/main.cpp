// ���� ���� ���������� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	
	/*int x; //ù��° ������ �����Һ���
	int y; 
	int sum, diff, mul, div;

	x = 20;
	y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("�μ��� ��: %d\n", sum);
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);
	printf("�μ��� ��: %d\n", div);
	*/


	////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	int x; //ù��° ������ �����Һ���
	int y;
	int sum, diff, mul, div;
	
	printf("x��: ");
	scanf("%d", &x);
	printf("y��: ");
	scanf("%d", &y);
	
	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;
	
	printf("�μ��� ��: %d\n", sum);
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);
	printf("�μ��� ��: %d\n", div);
	
	return 0;
}