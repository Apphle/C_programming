#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double voltage_Out()
{
	int num = 0;
	double voltage = 5.0;
	double resistance[10] = { 0.0 };
	double voltage_out = 0;

	printf("저항의 개수를 입력하세요 :");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("저항의 값을 입력하세요 :");
		scanf("%lf", &resistance[i]);
	}

	voltage_out = (voltage * resistance[1]) / (resistance[0] + resistance[1]);
	printf("V_out 값은 %lf입니다. ", voltage_out);
	return 0;
}
double Resistance()
{
	double voltage = 5.0;
	double resistance1 = 0;
	double resistance2 = 0;
	double voltage_out = 0;

	printf("(저항의 순서가 다르면 값이 다름 순서 주의) \n 저항의 값을 입력하세요 :");

	scanf("%lf", &resistance1);

	printf("(소수점 전부 적어야 정확히 나옴) \n voltage_out 값을 입력하세요 :");
	scanf("%lf", &voltage_out);

	resistance2 = (resistance1 * voltage_out) / (voltage - voltage_out);
	printf("저항의 값은 %lf입니다. ", resistance2);

	return 0;
}

int main()
{
	// 필요에 따라 한개씩 주석치고 사용할 것
	voltage_Out();
	Resistance();
}