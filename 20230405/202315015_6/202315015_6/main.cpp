#include<stdio.h>

int main(void)
{
	double AC;
	double AE;
	double BC;
	double DE;

	printf("�������� ���̸� �Է��Ͻÿ�: \n");
	scanf_s("%lf", &BC);

	printf("������ �׸����� ���̸� �Է��Ͻÿ�: \n");
	scanf_s("%lf", &AC);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: \n");
	scanf_s("%lf", &AE);

	DE = AE * BC / AC;
	printf("�Ƕ�̵��� ���̴� %lf�Դϴ�. \n", DE);

	return 0;
}