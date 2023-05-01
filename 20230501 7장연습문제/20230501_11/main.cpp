#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, total = 100;

	while (1)
	{
		printf("현제 연료량 %d\n",total);
		printf("연료 충전은 +, 소모는 -로 입력해 주세요: \n\n");
		scanf("%d", &x);
		total += x;

		
		if (total < 20)
		{
			printf("현제 연료량 %d\n", total);
			printf("(경고) 연료가 20리터 미만입니다.");
			printf("연료 충전은 +,소모는 -로 입력해 주세요:");
			break;
		}
	}
	return 0;
}