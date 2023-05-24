// 미래모빌리티공학과 202315015 이재혁
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint()
{
	int a = 0;

	a = 10 + rand() % 90;
	return a;
}
int main(void) 
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) 
		printf("%d ", randint());
}