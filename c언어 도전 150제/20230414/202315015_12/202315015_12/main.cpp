#include <stdio.h>

int main(void)
{
	int i = 2000000000;
	int j = 3000000000;

	printf("%d", i);
	printf("%d", j);

	//int 는 4byte 이다. 1byte 는 8bit 이다. 4byte는 2^32인데 j가 너무 커서
}