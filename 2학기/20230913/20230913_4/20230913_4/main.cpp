#include <stdio.h>

int main(void)
{
	int num1 = 3;
	int num2 = 6;
	int* num1pointer = &num1;
	int* num2pointer = &num2;

	printf("%d, %d\n", num1, *num1pointer);
	printf("%d, %d", num2, *num2pointer);

}