//////////////////////변수 바꾸기////////////////////
#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = 4;

	printf("Before : x = %d, y = %d\n", x, y);

	x = y;
	y = x;

	printf("After : x = %d, y = %d", x, y);

	return 0;
}