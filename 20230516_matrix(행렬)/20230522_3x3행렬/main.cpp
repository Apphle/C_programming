#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int B[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int c[3][3] = {};
	int sum = 0;
	int i, j, k;

	for (i = 0; i < 3; i++)//j가 3번 돌면 올라와서 한번 증가 하고 밑에 과정 반복
	{
		for (j = 0; j < 3; j++) //k에서 올라와서 한개 늘리고 k로 가서 반복
		{
			sum = 0;
			for (k = 0; k < 3; k++) //3번 돌고 j로
			{
				sum += A[i][k] * B[k][j];
			}
			c[i][j] = sum;
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	return (0);
}