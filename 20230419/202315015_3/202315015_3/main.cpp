#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x = 0;
	int y = 0;
	int ans = 0;
	int i = 0;
	int op = 0;
	op = rand() % 4;
	srand((unsigned)time(NULL));

	while (1)
	{
		for (i = 0; i < 10; i++)
		{
			if (op == 0)
				x = rand() % 10;
			y = rand() % 10;
			printf("%d + %d =", x, y);
			scanf("%d", &ans);
			if (x + y == ans)
				printf("限紹柔艦陥.\n");
			else
				printf("堂携製 せせ.\n");
		}

		for (i = 0; i < 10; i++)
		{
			if (op == 1)
				x = rand() % 10;
			y = rand() % 10;
			printf("%d - %d =", x, y);
			scanf("%d", &ans);
			if (x - y == ans)
				printf("限紹柔艦陥.\n");
			else
				printf("堂携製 せせ.\n");
		}

		for (i = 0; i < 10; i++)
		{
			if (op == 2)
				x = rand() % 10;
			y = rand() % 10;
			printf("%d * %d =", x, y);
			scanf("%d", &ans);
			if (x * y == ans)
				printf("限紹柔艦陥.\n");
			else
				printf("堂携製 せせ.\n");
		}

		for (i = 0; i < 10; i++)
		{
			if (op == 3)
				x = rand() % 10;
			y = rand() % 10;
			printf("%d / %d =", x, y);
			scanf("%d", &ans);
			if (x / y == ans)
				printf("限紹柔艦陥.\n");
			else
				printf("堂携製 せせ.\n");
		}

		for (i = 0; i < 10; i++)
		{
			if (op == 4)
				x = rand() % 10;
			y = rand() % 10;
			printf("%d % %d =", x, y);
			scanf("%d", &ans);
			if (x % y == ans)
				printf("限紹柔艦陥.\n");
			else
				printf("堂携製 せせ.\n");
		}
	}
	return 0;
}