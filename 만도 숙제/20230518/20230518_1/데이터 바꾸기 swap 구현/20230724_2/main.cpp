///////////////// 두 변수의 값을 바꾸려면 볌수가 하나 더 필요하다 ///////////
#include <stdio.h>

int main(void)
{
	int temp;
	int x = 3;
	int y = 7;

	printf("Before : x = %d, y = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("After : x = %d, y = %d", x, y);
}