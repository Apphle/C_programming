#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double fc = 0;
	double r = 0;
	double q1 = 0;
	double q2 = 0;
	double k = 8.99 * pow(10,9);

	printf("coulomb 법칙\n\n");
	printf("r, q1, q2 를 입력하시오\n");
	scanf("%lf %lf %lf", &r, &q1, &q2);

	fc = k * ((q1 * q2) / (r * r));

	printf("fc = %6.2lf", fc);
}