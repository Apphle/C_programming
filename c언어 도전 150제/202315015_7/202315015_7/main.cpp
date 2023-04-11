#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Heat_wave_warning = 33;
	int Heat_wave_warning_1 = 35;
	int num = 0;

	printf("일 최고 체감온도를 입력하시오: ");
	scanf("%d", &num);

	if (Heat_wave_warning_1 > num >= Heat_wave_warning)
	{
		printf("폭염주의보 이므로 12시 부터 16시 까지 야외 활동을 줄여 주십시오.");
	}
	else if (num >= Heat_wave_warning_1)
	{
		printf("폭염경보 이므로 12시 부터 16시 까지 야외 활동을 자제하시기 바랍니다");
	}
	else
	{

	}
}