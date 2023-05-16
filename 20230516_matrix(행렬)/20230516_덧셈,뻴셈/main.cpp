#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLS 3



int main(void)
{
	int A[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int B[ROWS][COLS] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
	int C[ROWS][COLS];
	int i, j;

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
		C[i][j] = A[i][j] + B[i][j];
		}
	}
	for (i = 0; i < ROWS; i++) 
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d ", C[i][j]);
			
		}
		printf("\n");
	}
/////////////////////////////////////////////////////////
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%d ", C[i][j]);

		}
		printf("\n");
	}
	return (0);
}






/*
int main(void)
{
	int a[i][j] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[i][j] = { {1,2,3},{4,5,6},{7,8,9} };
	int c[i][j] = 0;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d", c[i][j]);
		}
	}


}
*/