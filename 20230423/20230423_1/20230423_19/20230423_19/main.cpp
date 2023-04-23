#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;

	for (y = 0;y < 5; y++)
	{
		for (x = 0; x < 10; x++)
			printf("*");
		printf("\n\n");
	}

	return 0;
}