#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 3



int main(void)
{
	int A[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int ans[ROWS][COLS] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
	int num = 0;
	int i, j;

	printf("상수 1개를 입력하시오: ");
	scanf("%d", &num);

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			ans[i][j] = A[i][j] * num;
		}
	}
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d ", ans[i][j]);
		}
		printf("\n");
	}
	return (0);
}