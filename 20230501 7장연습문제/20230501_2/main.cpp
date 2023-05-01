#include <stdio.h>

int main(void)
{
	int num,sum = 0;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			sum += num;
		}
	}
	printf("1부터 100 사이의 3의 배수의 합: %d", sum);
}