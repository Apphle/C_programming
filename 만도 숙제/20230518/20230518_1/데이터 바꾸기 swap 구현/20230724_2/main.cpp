///////////////// �� ������ ���� �ٲٷ��� �ټ��� �ϳ� �� �ʿ��ϴ� ///////////
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