#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Heat_wave_warning = 33;
	int Heat_wave_warning_1 = 35;
	int num = 0;

	printf("�� �ְ� ü���µ��� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	if (Heat_wave_warning_1 > num >= Heat_wave_warning)
	{
		printf("�������Ǻ� �̹Ƿ� 12�� ���� 16�� ���� �߿� Ȱ���� �ٿ� �ֽʽÿ�.");
	}
	else if (num >= Heat_wave_warning_1)
	{
		printf("�����溸 �̹Ƿ� 12�� ���� 16�� ���� �߿� Ȱ���� �����Ͻñ� �ٶ��ϴ�");
	}
	else
	{

	}
}