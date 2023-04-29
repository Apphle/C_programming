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
	double m = 1000.0;
	double s = 3600.0;
	double a = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %4.2lf km/h�̴�.\n\n", velocity);  // %5.2lf�� �Ʒ��� �����Ұ�
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %4.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("(a)���� ���ؾ� �Ұ��� ���ӵ� �Դϴ�.\n\n");

		printf("�ӵ��� ���� km/h �� m/s �� �ٲ�� �մϴ�.\n");
		printf("1km * 1000 m / 1h * 3600 s = 1 / 3.6���� �����ݴϴ�.\n");
		velocity_m = velocity * m / s;
		printf("���� %4.2lf km/h = %4.2lf km/h / 3.6 = %4.2lf m/s �Դϴ�.\n\n", velocity, velocity, velocity_m);

		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
		printf("v�� ���߼ӵ�(m/s), v0�� ó���ӵ�(m/s), a�� ���ӵ�(m/s^2), ��x�� �Ÿ�(m) �Դϴ�.\n\n");
		printf("v^2�� ���߼ӵ� �̹Ƿ� %4.2lf m/s^2 �̰�,\n", velocity_m);
		printf("v0^2�� ó���ӵ� �̹Ƿ� 0 m/s �Դϴ�.\n");
		printf("v^2 - v0^2 = (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = %4.2lf m/s �Դϴ�.\n\n", velocity_m, velocity0, pow(velocity_m, 2));

		printf("2 * a * x ���� x�� �Ÿ� %4.2lf m�� ���մϴ�.\n", distance);
		printf("�����ϸ� (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * (%6.2lf m) �Դϴ�.\n\n", velocity_m, velocity0, distance);

		a = pow(velocity_m, 2) / (2 * distance);

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("���� v^2 - v0^2 = 2 * a * ��x\n");
		printf("�����ϸ� (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * (%6.2lf m) �Դϴ�.\n\n", velocity_m, velocity0, distance);
		printf("���ӵ��� ����� �ӵ��� ���̸� �Ÿ��� ������ ���մϴ�.\n\n");
		printf("a = (%4.2lf m/s)^2 - (%6.2lf m/s)^2 / (2 * %4.2lf m)\n\n", velocity_m, velocity0, distance, a);
		printf("��: a = %4.2lf m/s^2 \n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("(b)���� ���Ͽ��� �ϴ� ���� �ð� �Դϴ�.\n\n");

		printf("(b)���� �ʿ��� ������ v = v0 + a * t �Դϴ�.\n");
		printf("v�� ���߼ӵ�(m/s), v0�� ó���ӵ�(m/s), a�� ���ӵ�(m/s^2), t�� �ð�(s) �Դϴ�.\n");
		printf("�����ϸ� (%6.2lf m/s) = (%6.2lf m/s) + (%6.2lf m/s^2) * t �Դϴ�.\n\n", velocity_m, velocity0, a);
		printf("�ð��� ���ؾ� �ϹǷ� �ð�(t)�� ���� ������ �����ϸ� t = (%6.2lf m/s) / (%6.2lf m/s^2) �� �˴ϴ�.\n", velocity_m, a);

		t = ((velocity * m) / s) / a;

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("���� v = v0 + a * t\n");
		printf("�����ϸ� (%6.2lf m/s) = (%6.2lf m/s) + (%6.2lf m/s^2) * t �Դϴ�.\n\n", velocity_m, velocity0, a);
		printf("�ð��� ����� �ӵ��� ���̸� ���ӵ��� ������ ���մϴ�.\n");
		printf("�ð�(t)�� ���� ������ �����ϸ� t = (v - v0) / a �� �ǰ�\n");
		printf("�����ϸ� t = (%4.2lf m/s - %4.2lf m/s) / %4.2lf m/s^2 �� �˴ϴ�.\n", velocity_m, velocity0, a);

		printf("��: %4.2lf s\n\n", t);

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