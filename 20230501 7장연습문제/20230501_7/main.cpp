#include <stdio.h>

int main(void)
{
	int x, y;

	for (x = 1; x <= 7; x++)
	{
		for (y = 0; y < x; y++)
		{
			printf("*");
		}
		printf("\n");
	}
}