#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int B[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int c[3][3] = {};
	int sum = 0;
	int i, j, k;

	for (i = 0; i < 3; i++)//j�� 3�� ���� �ö�ͼ� �ѹ� ���� �ϰ� �ؿ� ���� �ݺ�
	{
		for (j = 0; j < 3; j++) //k���� �ö�ͼ� �Ѱ� �ø��� k�� ���� �ݺ�
		{
			sum = 0;
			for (k = 0; k < 3; k++) //3�� ���� j��
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