/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	double feet = 0;
	double inch = 0;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &num1);

	num1 = num1 - feet - inch;

	feet = num1 / 12;
	num1 = num1 % 12;

	inch = num1 / 2.54;
	num1 = num1 % 2.54;

	printf("%d cm�� %.lf ��Ʈ %.lf ��ġ �Դϴ�.", num1, feet, inch);
		
}
*/
////////////////////////////// �ʿ���°�.////////////////

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

////////////////////////13�� ����/////////////////////////
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
/////////////////////////9������///////////////////////
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
/////////////////////////8�� ����//////////////////////
/*
#include <stdio.h>

int main(void)
{
	float a = 0.7;
	printf("%d \n", a == 0.7);
}
*/

//////////////////////////7�� ����/////////////////////
/*
#include <stdio.h>

int main(void)
{
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++k;
	printf("%d, %d, %d, %d\n", i, j, k, m);
}
*/