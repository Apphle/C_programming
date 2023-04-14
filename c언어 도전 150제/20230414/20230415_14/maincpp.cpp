#include <stdio.h>

int main(void)
{
	bool b;

	b = 5 < 10;

	if (b == 1)
	{
		printf("5는 10보다 작습니다.");
	}
	else
	{
		printf("5는 10보다 크지 않습니다.");
	}
}