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
	printf("���� q = 1.6 * 10^-19 �϶� 1.6 10 -19 �� �Է� (B �� m �� ��������)\n");
	printf("q �� �Է��ϼ��� :");
	scanf("%lf %lf %lf", &q1, &q2, &q3);
	printf("B �� �Է��ϼ��� :");
	scanf("%lf %lf %lf", &B1, &B2, &B3);
	printf("r �� �Է��ϼ��� :");
	scanf("%lf", &r);
	printf("m �� �Է��ϼ��� :");
	scanf("%lf %lf %lf", &m1, &m2, &m3);
	v = ((q1 * pow(q2, q3)) * (B1 * pow(B2, B3)) * r) / (m1 * pow(m2,m3));
	printf("v = %.1lf", v);
}