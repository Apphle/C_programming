#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_15(int solution, int answer)
{
	double velocity = 120.0;
	double velocity0 = 0;
	double distance = 240.0;
	double accel = 0;
	double velocity_m = 0;
	double a = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %6.2lf km/h �̴�.\n\n", velocity);  // %5.2lf�� �Ʒ��� �����Ұ�
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %6.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
		printf("v�� ���߼ӵ�(m/s), v0�� ó���ӵ�(m/s), a�� ���ӵ�(m/s^2), ��x�� �Ÿ�(m) �Դϴ�.\n\n");

		printf("���ӵ��� ���ϱ� ���ؼ� ���� km/h �� m/s �� ������� �մϴ�.\n");
		printf("1km = 1000 m �̹Ƿ� ( *1000 )��(��) ���ְ� ,1h = 3600 s �̹Ƿ� ( /3600 )��(��) ���ݴϴ�.\n");
		velocity_m = velocity * 1000 / 3600;
		printf("���� %6.2lf km/h * 1000 / 3600 = %6.2lf m/s �Դϴ�.\n\n", velocity, velocity_m);

		printf("v�� �̷��ϱ� ���� �ʿ��� �ӵ� �̹Ƿ� v = (%6.2lf m/s) �̰�,\n", velocity_m);
		printf("v0�� ���� �������� �ӵ� �̹Ƿ� v0 = (%6.2lf m/s) �Դϴ�.\n", velocity0);
		printf("��x�� ����Ⱑ �޸� Ȱ�ַ��� �Ÿ� �̹Ƿ� ��x = (%6.2lf m) �Դϴ�.\n\n", distance);

		a = pow(velocity_m, 2) / (2 * distance);

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("����: v^2 - v0^2 = 2 * a * ��x\n");
		printf("�����ϸ� (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * (%6.2lf m) �Դϴ�.\n\n", velocity_m, velocity0, distance);
		printf("���ӵ��� ����� �ӵ��� ���̸� �Ÿ��� ������ ���մϴ�.\n\n");
		printf("���ӵ� ���ϴ� ����: a = (v^2 - v0^2) / (2 * ��x)\n\n");
		printf("�����ϸ� a = (%6.2lf m/s^2 - %6.2lf m/s^2) / (2 * %6.2lf m)\n\n", velocity_m, velocity0, distance);
		printf("��: a = %6.2lf m/s^2 \n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("���� ������ v = v0 + a * t �Դϴ�.\n");
		printf("v�� ���߼ӵ�(m/s), v0�� ó���ӵ�(m/s), a�� ���ӵ�(m/s^2), t�� �ð�(s) �Դϴ�.\n\n");

		printf("v�� �̷��ϱ� ���� �ʿ��� �ӵ� �̹Ƿ� v = (%6.2lf m/s) �̰�,\n", velocity_m);
		printf("v0�� ���� �������� �ӵ� �̹Ƿ� v0 = (%6.2lf m/s) �Դϴ�.\n", velocity0);
		printf("a�� ���ӵ� �̹Ƿ� a = (%6.2lf m/s^2) �Դϴ�.\n\n", a);

		t = ((velocity * 1000) / 3600) / a;

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("����: v = v0 + a * t\n");
		printf("�����ϸ� (%6.2lf m/s) = (%6.2lf m/s) + (%6.2lf m/s^2) * t �Դϴ�.\n\n", velocity_m, velocity0, a);

		printf("�ð��� ����� �ӵ��� ���̸� ���ӵ��� ������ ���մϴ�.\n\n");
		printf("�ð� ���ϴ� ����: t = (v - v0) / a \n\n");
		printf("�����ϸ� t = (%6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2 �Դϴ�.\n\n", velocity_m, velocity0, a);

		printf("��: %6.1lf s\n\n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================= Physics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("========================   Odd Number    ========================\n");
	printf("=================================================================\n");

	Excersize_2_15(1, 1);

}