#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_RESISTOR 10

double serial(double no_resistor)
{
	double total_resistor = 0.0;
	double i;
	for (int j = 0; j < no_resistor; j++)
	{
		printf("i 를 입력하시오 : ");
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

	printf("직렬(1), 병렬(2) 중 하나를 선택하시오: ");
	scanf("%d",&num);

	switch (num)
	{
	case 1:
		printf("직렬을 선택했습니다. ");
		break;
	case 2:
		printf("병렬을 선택했습니다. ");
		break;
	default:
		printf("잘못 선택했습니다. 다시 선택하세요: ");
		break;
	}
	printf("\n\n");
	
	

	printf("저항의 갯수를 입력하시오: ");
	scanf("%lf", &no_resistor);
	
	if (num == 1)
	{
		serial(no_resistor);
		printf("직렬이고 저항의 갯수가 %lf 일때 값 = %lf", );
	}

}