#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double voltage_Out()
{
	int num = 0;
	double voltage = 5.0;
	double resistance[10] = { 0.0 };
	double voltage_out = 0;

	printf("������ ������ �Է��ϼ��� :");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("������ ���� �Է��ϼ��� :");
		scanf("%lf", &resistance[i]);
	}

	voltage_out = (voltage * resistance[1]) / (resistance[0] + resistance[1]);
	printf("V_out ���� %lf�Դϴ�. ", voltage_out);
	return 0;
}
double Resistance()
{
	double voltage = 5.0;
	double resistance1 = 0;
	double resistance2 = 0;
	double voltage_out = 0;

	printf("(������ ������ �ٸ��� ���� �ٸ� ���� ����) \n ������ ���� �Է��ϼ��� :");

	scanf("%lf", &resistance1);

	printf("(�Ҽ��� ���� ����� ��Ȯ�� ����) \n voltage_out ���� �Է��ϼ��� :");
	scanf("%lf", &voltage_out);

	resistance2 = (resistance1 * voltage_out) / (voltage - voltage_out);
	printf("������ ���� %lf�Դϴ�. ", resistance2);

	return 0;
}

int main()
{
	// �ʿ信 ���� �Ѱ��� �ּ�ġ�� ����� ��
	voltage_Out();
	Resistance();
}