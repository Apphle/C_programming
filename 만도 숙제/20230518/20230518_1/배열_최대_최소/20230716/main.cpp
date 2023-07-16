#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 

int main(void)
{
	srand(time(NULL));
	int arr[SIZE] = { rand() % 100 } ;
	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else
		{
			min = arr[i];
		}
	}
	printf("max = %d 입니다.\n", max);
	printf("min = %d 입니다.", min);

}