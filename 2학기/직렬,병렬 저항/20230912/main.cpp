#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_RESISTOR 10

double serial(double no_resistor)
{
	double total_resistor = 0.0;
	double i;
	for (int j = 0; j < no_resistor; j++)
	{
		printf("i �� �Է��Ͻÿ� : ");
		scanf("%lf", &i);
		total_resistor += i;
	}
	return 0;
}



int main(void)
{
	int num;
	double resistor[MAX_NO_RESISTOR] = { 0 };
	double no_resistor;

	printf("����(1), ����(2) �� �ϳ��� �����Ͻÿ�: ");
	scanf("%d",&num);

	switch (num)
	{
	case 1:
		printf("������ �����߽��ϴ�. ");
		break;
	case 2:
		printf("������ �����߽��ϴ�. ");
		break;
	default:
		printf("�߸� �����߽��ϴ�. �ٽ� �����ϼ���: ");
		break;
	}
	printf("\n\n");
	
	

	printf("������ ������ �Է��Ͻÿ�: ");
	scanf("%lf", &no_resistor);
	
	if (num == 1)
	{
		serial(no_resistor);
		printf("�����̰� ������ ������ %lf �϶� �� = %lf", );
	}

}