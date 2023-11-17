#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double v;
	double q1, q2, q3;
	double B1, B2, B3;
	double r;
	double m1, m2, m3;

	printf(" v = qBr / m\n");
	printf("예시 q = 1.6 * 10^-19 일때 1.6 10 -19 로 입력 (B 와 m 도 마찬가지)\n");
	printf("q 를 입력하세요 :");
	scanf("%lf %lf %lf", &q1, &q2, &q3);
	printf("B 를 입력하세요 :");
	scanf("%lf %lf %lf", &B1, &B2, &B3);
	printf("r 를 입력하세요 :");
	scanf("%lf", &r);
	printf("m 를 입력하세요 :");
	scanf("%lf %lf %lf", &m1, &m2, &m3);
	v = ((q1 * pow(q2, q3)) * (B1 * pow(B2, B3)) * r) / (m1 * pow(m2,m3));
	printf("v = %.1lf", v);
}