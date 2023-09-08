#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* aPtr;
	int a = 10;

	aPtr = &a;

	printf(" %p\n", aPtr);
	printf(" %p\n", &a);
	printf(" %d\n", *aPtr);

	return 1;
}