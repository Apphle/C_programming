#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define DEG2RAD(x) x*M_PI/180
#include <stdio.h>
#include <math.h>

double x_new = 0;
double y_new = 0;

void change(double x,double y,double angle_degree)
{
	x_new = cos(DEG2RAD(angle_degree)) * x - sin(DEG2RAD(angle_degree)) * y;
	y_new = sin(DEG2RAD(angle_degree)) * x + cos(DEG2RAD(angle_degree)) * y;
	return;
}

int main(void)
{
	double x;
	double y;
	double angle_degree;
	printf("좌표 (x,y)와 회전시킬 각도를 입력하시오 :");
	scanf("%lf %lf %lf", &x, &y, &angle_degree);
	change(x, y, angle_degree);
	printf("(x,y) = (%lf, %lf)", x_new, y_new);
}