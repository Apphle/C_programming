#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#define DEG2RAD(x)  x*M_PI/180

int main(void)
{
	double X = 0;
	double Y = 0;
	double a = 0;
	double x = 0;
	double y = 0;

	printf("��ǥ X,Y �� �Է��Ͻÿ� : ");
	scanf("%lf %lf", &X, &Y);
	printf("ȸ�� ���� �� �Է��Ͻÿ� : ");
	scanf("%lf", &a);

	x = (cos(DEG2RAD(a)) * X) - (sin(DEG2RAD(a)) * Y);
	y = (sin(DEG2RAD(a)) * X) + (cos(DEG2RAD(a)) * Y);

	printf("(x,y) = (%lf, %lf)", x, y);
}