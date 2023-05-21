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

void Excersize_2_27(int solution, int answer)
{
	double height_0 = 75.0;
	double height = 0;
	double velocity_f = 0;
	double velocity_i = 12.0;
	double gravity = -9.8;
	double a = 0, b = 0, c = 0, d = 0, e = 0;
	double ans_1 = 0, ans_2 = 0;
	double total_distance = 0;

	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %6.2lf m �� ���� ������ %6.2lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�.\n\n", height, velocity_i);
	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");

	if (solution == SHOW)
	{
	
		printf("=========================   Ǯ ��   =============================\n\n");
		// your code here
		printf("���ð����� y = y0 + v0 * t + 1/2 * a * t^2�Դϴ�. \n");

		printf("y:������ġ, y0:�ʱ���ġ , v0:�ʱ�ӵ�,  t:�ð�, a:���ӵ� \n\n");

		printf("�߷°��ӵ� a ��  �Ʒ� ���� �̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n");

		printf("%6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * (%6.2lf m/s^2) * t^2\n\n", height, height_0, velocity_i, gravity);
		a = 0.5 * gravity;
		b = velocity_i;
		c = height_0;
		printf("t = %6.2lft^2 + %6.2lft + %6.2lf = 0\n", a, b, c);
		d = b * b - 4.0 * a * c;
		e = sqrt(d);
		printf("  =  %6.2lf s\n\n", (-b - e) / (2.0 * a));
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");
		if (a == 0)
			printf("t=%5.2lf\n", -c / b);
		else
		{
			d = b * b - 4.0 * a * c;
			if (d >= 0)
			{
				e = sqrt(d);
				printf("t =  %6.2lf s\n\n",(-b - e) / (2.0 * a));
			}
		}
	}

	if (solution == SHOW)
	{
		printf("=========================   Ǯ ��   =============================\n");
		printf("\n");
		printf("���� ������ v = v0 + a x t �Դϴ�.\n");

		printf("v:���߼ӵ�,  v0:�ʱ�ӵ�, a:���ӵ�, t:�ð�\n\n");

		printf("%6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * %6.2lf s \n", velocity_f, velocity_i, gravity, (-b - e) / (2.0 * a));
		ans_1 = velocity_i + gravity * ((-b - e) / (2.0 * a));
		printf("           = %6.2lf m/s\n\n", ans_1);
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("v = %6.2lf m/s\n\n", ans_1);
	}
	if (solution == SHOW)
	{

		printf("=========================   Ǯ ��   =============================\n\n");

		printf("���� ������ v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n");   // ������� ���

		printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��y :�Ÿ���ȭ��   \n\n");

		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * %6.2lf m/s^2 * ��y\n\n", velocity_f, velocity_i, gravity);
		printf("��y = ( (%6.2lf m/s)^2 - (%6.2lf m/s)^2 ) / ( 2 * %6.2lf m/s^2 )  \n", velocity_f, velocity_i, gravity);
		ans_2 = (velocity_f - pow(velocity_i,2)) / (2 * gravity);
		printf("    = %6.2lf m\n\n", ans_2);

		printf("��y = %6.2lf * 2 + %6.2lf\n", ans_2, height_0);
		total_distance = ans_2 * 2 + height_0;
		printf("    = %6.1lf m\n", total_distance);

	}
	if (answer == SHOW)
	{
		printf("\n");
		printf("=========================   �� ��   =============================\n\n");

		printf(" ��y = %6.1lf m\n\n", total_distance);

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

	Excersize_2_27(1, 1);
}