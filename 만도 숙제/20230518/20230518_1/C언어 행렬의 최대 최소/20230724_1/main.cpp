#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int arr[SIZE][SIZE] = {{ 9, 25, 7 }, {10, 1, 4}, {3, 2, 15}};

	int max = arr[0][0];
	int min = arr[0][0];

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			else if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	printf("max = %d\nmin = %d", max, min);
}