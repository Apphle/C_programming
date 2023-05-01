#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, num = 0;

	while (1)
	{
		printf("막대의 높이(종료 -1): %d\n", num);
		scanf("%d", &num);

		for (x = 1; x <= num; x++)
		{
			printf("*");

			if (num < 0)
			{
				break;
			}
		}
	}
	return 0;
}