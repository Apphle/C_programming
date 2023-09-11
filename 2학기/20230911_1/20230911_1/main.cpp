#include <stdio.h>

void swap(int* p, int* p1)
{
	int temp;
	temp = *p;
	*p = *p1;
	*p1 = temp;
}


int main(void)
{
	int a = 5;
	int b = 10;

	printf("변경전  a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("변경후  a = %d, b = %d\n", a, b);
	return 0;
}