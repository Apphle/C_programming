#include <stdio.h>

int main(void)
{
	int num = 123;
	int* ptr = &num;
	printf("%d\n", *ptr);	// 주소가 가르키는 값(내용) 출력
	//printf("%d\n", ptr);	// 주솟값 출력

	return 0;
}