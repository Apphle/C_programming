// 미래모빌리티공학과 / 202315015 / 이재혁
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int dice, user_dice = 0, computer_dice = 0;
	srand(time(NULL));

	printf("사용자 주사위 = ");
	printf("(");
	for (int i = 0; i < 3; i++)
	{

		dice = 1 + rand() % 6;

		if (i < 2) {
			printf("%d, ", dice);
		}
		else {
			printf("%d", dice);
		}

		user_dice += dice;
	}
	printf(")");
	printf(" = %d\n", user_dice);

	printf("컴퓨터 주사위 = ");
	printf("(");
	for (int i = 0; i < 3; i++)
	{

		dice = 1 + rand() % 6;
		if (i < 2) {
			printf("%d, ", dice);
		}
		else {
			printf("%d", dice);
		}

		computer_dice += dice;
	}
	printf(")");
	printf("=%d\n", computer_dice);

	if (user_dice > computer_dice)
	{
		printf("사용자 승리");
	}
	else if (user_dice < computer_dice)
	{
		printf("컴퓨터의 승리");
	}
}