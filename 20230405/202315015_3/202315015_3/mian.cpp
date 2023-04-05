/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	double feet = 0;
	double inch = 0;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &num1);

	num1 = num1 - feet - inch;

	feet = num1 / 12;
	num1 = num1 % 12;

	inch = num1 / 2.54;
	num1 = num1 % 2.54;

	printf("%d cm는 %.lf 피트 %.lf 인치 입니다.", num1, feet, inch);
		
}
*/
////////////////////////////// 필요없는거.////////////////

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z, k = 0;
	int num1 = 10;
	int num2 = 5;
	int num3 = 2;

	printf("x = %d + k\n", num1);
	printf("%d = x + y\n", num2);
	printf("z% = 20\n");
	printf("x = y = z = %d\n", num3);
}

////////////////////////13번 문제/////////////////////////
/*
#include <stdio.h>

int main(void)
{
	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);
	printf("%d\n", c);
	return 0;
}
*/
/////////////////////////9번문제///////////////////////
/*
#include <stdio.h>

int main(void)
{
	int x = 4, y, z;
	y = --x;
	z = x--;

	printf("%d, %d, %d\n", x, y, z);
}
*/
/////////////////////////8번 문제//////////////////////
/*
#include <stdio.h>

int main(void)
{
	float a = 0.7;
	printf("%d \n", a == 0.7);
}
*/

//////////////////////////7번 문제/////////////////////
/*
#include <stdio.h>

int main(void)
{
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++k;
	printf("%d, %d, %d, %d\n", i, j, k, m);
}
*/