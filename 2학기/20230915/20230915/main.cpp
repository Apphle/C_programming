#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void min_max(int* a, int* b, int* c,int* min, int* max)
{
	*max = *a;
	*min = *a;

	if (*max < *b)
	{
		*max = *b;
	}
	if (*max < *c)
	{
		*max = *c;
	}

	if (*min > *b)
	{
		*min = *b;
	}
	if (*min > *c)
	{
		*min = *c;
	}
	
}

int main(void)
{
	int a, b, c, min, max;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);

	min_max(&a, &b, &c, &min, &max);

	printf("max = %d, min = %d �Դϴ�.", max, min);
}