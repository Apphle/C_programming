// �̷������Ƽ���а� 202315015 ������
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