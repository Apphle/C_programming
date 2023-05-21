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
	double velocity_f = 120.0;
	double velocity_m_s = 0;
	double x_displacement = 240.0;
	double velocity = 0;
	double a = 0;
	double time = 0;

	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %6.2lf km/h �̴�.\n\n", velocity_f);  // %5.2lf�� �Ʒ��� �����Ұ�
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %6.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", x_displacement);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");   // ������ ���

		printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, ��x: �Ÿ���ȭ��   \n\n");
		velocity_m_s = velocity_f / 3.6;
		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n\n", velocity_m_s, velocity, x_displacement);
		a = (pow(velocity_m_s, 2) - pow(velocity, 2)) / (2 * x_displacement);
		printf("a = (%6.2lf m/s)^2 / 2 * %6.2lf m\n", velocity_m_s, x_displacement);
		printf("  = %6.2lf m/s^2\n\n", a);

		//printf(" %lf", velocity_1);
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("a =  %6.2lf m/s^2\n", a);
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   Ǯ ��   =============================\n\n");

		printf("���� ������ v = v0 + a * t �Դϴ�.\n");

		printf("v: ���߼ӵ�,  v0: �ʱ�ӵ�, a: ���ӵ�, t: �ð�\n\n");

		printf("v = %6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * t\n\n", velocity_m_s, velocity, a);
		time = velocity_m_s / (velocity + a);
		printf("t = %6.2lf m/s / %6.2lf m/s^2\n", velocity_m_s, a);
		printf("  = %6.2lf s\n\n", time);

	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("t = %6.2lf s\n\n", time);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
void Excersize_2_27(int solution, int answer)
{
	double height_0 = 75.0;
	double height = 0;
	double velocity = 12.0;
	double gravity = -9.8;
	double a = 0, b = 0, c = 0, d = 0;


	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %6.2lf m �� ���� ������ %6.2lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�.\n\n", height, velocity);
	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   Ǯ ��   =============================\n");
		// your code here
		printf("���ð����� y = y0 + v0 * t + 1/2 * a * t^2�Դϴ�. \n");

		printf("y:������ġ, y0:�ʱ���ġ , v0:�ʱ�ӵ�,  t:�ð�, a:���ӵ� \n\n");

		printf("�߷°��ӵ��� �Ʒ� ���� �̹Ƿ� -%6.2lf m/s^2 �Դϴ�.\n\n");

		printf("%6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * (%6.2lf m/s^2) * t^2\n\n", height, height_0, velocity, gravity);

		printf("at^2 + bt + c ���·� Ǯ���Ͻÿ�.\n\n");
		a = 0.5 * gravity;
		b = velocity;
		c = height_0;
		printf("%6.2lft^2 + %6.2lft + %6.2lf\n\n", a, b, c);

		printf("=================================================================\n\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		if (a == 0)
			printf("t=%5.2lf\n", -c / b);
		else
		{
			d = b * b - 4.0 * a * c;
			if (d >= 0)
			{
				printf("�����ؾ��ϴ� �ð� t=%5.2lf\n", sqrt(d) / ((2.0 * a)));
			}
			else
				printf("�Ǳ��� �������� �ʽ��ϴ�\n");
		}


		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");


		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");



		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");


		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");


		printf("=================================================================\n");
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
	Excersize_2_27(1, 1);
}