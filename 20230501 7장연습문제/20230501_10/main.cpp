#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	for (x = 2; x <= 100; x++)
	{
		for (y = 2; y < x; y++)
		{
			if (x % y == 0) goto out;
		}
		printf("%d\n\n", x);
	out:;;
	}
	return 0;
}