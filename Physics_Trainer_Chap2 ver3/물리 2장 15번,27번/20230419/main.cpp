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
/*
void Excersize_2_1(int solution, int answer)
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement  = 0.0, y_displacement  = 0.0;
	double x_displacement1 = 0.0, y_displacement1 = 0.0;
	double x_displacement2 = 0.0, y_displacement2 = 0.0;
	double x_displacement3 = 0.0, y_displacement3 = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ������ Vector�� ���� �����Դϴ�.\n");
		printf("���� �� �̵� �Ÿ��� x,y������ ���� ���ظ� �ϼ���.\n");

		//   2023.04.07 �߰� //
		printf("������ Y������ ������ X ������ ��ǥ���� ���մϴ�.\n\n");
		printf("�������� %4.1lf km�� ���ư� �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n");

		x_displacement1 = north_distance1 * cos(DEG2RAD(90));
		y_displacement1 = north_distance1 * sin(DEG2RAD(90));

		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement1, y_displacement1);

		printf("���� �������� �������� %4.1lf km�� ���ư� �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n", south_distance);

		x_displacement2 = south_distance * cos(DEG2RAD(-90));
		y_displacement2 = south_distance * sin(DEG2RAD(-90));
		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement2, y_displacement2);

		printf("�ٽ� �������� %4.1lf km�� ���� ������ �̵��� ���� X ����, Y ������ ������ �����ϴ�.\n", north_distance2);

		x_displacement3 = north_distance2 * cos(DEG2RAD(90));
		y_displacement3 = north_distance2 * sin(DEG2RAD(90));

		printf("X ���� :  %.2lf km, Y ���� :  %.2lf km \n\n", x_displacement3, y_displacement3);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		x_displacement = x_displacement1 + x_displacement2 + x_displacement3;

		printf("X ���� ���� ������ �����ϴ�. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", x_displacement, x_displacement1, x_displacement2, x_displacement3);

		y_displacement = y_displacement1 + y_displacement2 + y_displacement3;

		printf("Y ���� ���� ������ �����ϴ�. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", y_displacement, y_displacement1, y_displacement2, y_displacement3);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");

	if (solution == SHOW)
	{

	}

	if (answer == SHOW)
	{


	}

}
*/

void Excersize_2_1(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ����ȯ  2023.04.14 �Ϸ�
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement = 0.0;
	double displacement = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�   \n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);
	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   =============================\n");
		printf("���� ������ �������� �̵��� ���� ���ϰ� �������� �̵��� ���� ���� ���Դϴ�. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ� ? \n\n");
		printf("�����⵿��Ⱑ �����κ��� ������ ���������� ������ �����ϴ�. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ �� �����ΰŸ��� �����Դϴ�. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n", x_displacement);

		printf("�����⵿��Ⱑ �������� �̵��ѰŸ��� %4.1lf km�� ������ �����ϴ�. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ� ? \n\n");
		displacement = x_displacement + south_distance;
		printf("�����⵿��Ⱑ �� ������ �Ÿ��� ���� ������ �����ϴ�. : %4.1lf km \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_3(int solution, int answer)   // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.14 �̿Ϸ�
{
	double distance = 408000.0; // 408km �� m�� ��ȯ�� ��
	double time1 = 10.0;
	double time = 9420;        // 2�ð� 37���� �ʷ� ��ȯ�� ��
	double time_h = 12.0;
	double time_m = 37.0;
	double velocity = 0.0;




	printf("\n\n");
	printf("2-3 \n");
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %d km�̴�\n", distance);
	printf("���� %d �ÿ� ���￪�� ����� KTX�� %d �� %d �� �λ꿪�� �����Ͽ���.\n\n", time1, time_h, time_m);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("���� ��� �ӷ��� ������ ���ϼ���.\n\n");
		printf("��� �ӷ��� ������ : V��� = (Xf - Xi) / (Tf - Ti) �Դϴ�.\n\n");

		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		velocity = distance / time;

		printf("��ռӷ��� ���ϴ� ���� ������ �����ϴ�.\n%.2lf m/s = %.2lf m / %.2lf s\n\n", velocity, distance, time);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_5(int solution, int answer)
{
	double distance1 = 200;
	double velocity1 = 90;
	double distance2 = 200;
	double velocity2 = 50;
	double all_distance = 0;
	double all_time = 0;
	double time1 = 0;
	time1 = distance1 / velocity1;
	double time2 = 0;
	time2 = distance2 / velocity2;
	double rest = 1;
	double displacement = 0;
	double average_velocity = 0;
	double average_speed = 0;


	printf("\n\n");
	printf("2-5 \n");
	printf("� ����� ��ӵ��θ� ó�� %.0lf km�� %.0lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
	printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %.0lf km�� %.0lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
	printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ v��� = (���� �Ÿ� - ó�� �Ÿ�) / (���� �ð� - ó�� �ð�)�Դϴ�.\n"); // v = �ӷ�

		printf("�� ����� ó�� %0.1lf km�� ���� �� �ɸ� �ð� %0.1lf h�� %0.1lf km (�� ���� �̵��Ÿ�) / %0.1lf km/h (�� ���� �ӷ�)�̴�. \n", distance1, time1, distance1, velocity1);
		printf("�� ����� �ٽ� %0.1lf km�� ���� �� �ɸ� �ð� %0.1lf h�� %0.1lf km (�� ���� �̵��Ÿ�) / %0.1lf km/h (�� ���� �ӷ�)�̴�. \n", distance2, time2, distance2, velocity2);
		all_time = time1 + time2 + rest;
		printf("�� ����� ����������� �� �ɸ��ð�%0.1lf h�� %0.1lf h + %0.1lf h + %0.1lf h�̴�. \n", all_time, time1, time2, rest);
		all_distance = distance1 + distance2;
		printf("�� ����� ����������� �� �̵��� �Ÿ�%0.1lf km�� %0.1lf km + %0.1lf km�̴�. \n", all_distance, distance1, distance2);



	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n");
		printf("�� ����� ����������� ��� �ӷ��� �� �̵� �Ÿ� / �� �ɸ� �ð��̴�.\n");
		all_distance = distance1 + distance2;
		printf("�� �̵� �Ÿ�: %0.1lf km\n", all_distance);
		all_time = time1 + time2 + 1;
		printf("�� �ɸ� �ð�: %0.1lf h\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
		printf("%0.1lf km/h(��� �ӷ�) = %0.1lf km(�� �̵� �Ÿ�) / %0.1lf h(�� �ɸ� �ð�)\n", average_velocity, all_distance, all_time);
		printf("�� ����� ����������� ��� �ӷ�: %.0lf km/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
		printf("���� ������ s��� = ���� / �� �ɸ� �ð��Դϴ�.\n"); //s = �ӵ�

		displacement = distance1 - distance2;
		printf("�� ����� %0.1lf km���ٰ� �ٽ� %0.1lf km�ǵ��� ���� ���� ������ %0.1lf km�̴�.\n", distance1, distance2, displacement);
		all_time = time1 + time2 + rest;
		printf("�� ����� ����������� �� �ɸ��ð�%0.1lf h�� %0.1lf h+ %0.1lf h+ %0.1lf h�̴�. \n", all_time, time1, time2, rest);

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
		printf("�� ����� ����������� ��� �ӵ��� ���� / �� �ɸ� �ð��̴�.\n");
		displacement = distance1 - distance2;
		printf("����: %0.1lf km\n", displacement);
		all_time = time1 + time2 + 1;
		printf("�� �ɸ� �ð�: %0.1lf h\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("%0.1lf km/h(��� �ӵ�) = %0.1lf km(����) / %0.1lf h(�� �ɸ� �ð�)\n", average_speed, displacement, all_time);

		printf("�� ����� ����������� ��� �ӵ�: %.0lf km/h \n", average_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}
/*
void Excersize_2_5(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.14 �̿Ϸ�
{
	double xf1 = 0;
	double xi1 = 0;
	double tf1 = 0;
	double ti1 = 0;
	double xf2 = 0;
	double xi2 = 0;
	double tf2 = 0;
	double ti2 = 0;
	double distance1 = 200;
	double velocity1 =  90;
	double distance2 = 200;
	double velocity2 =  50;
	double time1 = 0;
	double h1 = time1;
	time1 = distance1 / velocity1;
	double time2 = 0;
	double h2 = time2;
	time2 = distance2 / velocity2;
	double displacement = 0;
	double average_velocity = 200 / 90;
	displacement = distance1 - distance2;
	double average_speed;
	average_speed = displacement / (time1 + time2 + 1);

	printf("\n\n");
	printf("2-5 \n");
	printf("� ����� ��ӵ��θ� ó�� %.0lf km�� %.0lf km/h�� �ӷ����� �޸���, \n", distance1, velocity1);
	printf("1�ð� ���� ���ɽĻ縦 �� �Ŀ� �ٽ� %.0lf km�� %.0lf km/h�� �޷��� �ǵ��ƿԴ�. \n\n", distance2, velocity2);
	printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    Ǯ ��   =============================\n");
		printf("���� ������ v��� = (xf - xi) / (tf - ti)�Դϴ�.\n"); // v = �ӷ�

		printf("�� �̵� �Ÿ��� ���ϱ� ���ؼ� �ӵ��� �ð��� �˰� �����Ƿ� x = v x t ������ ����մϴ�.n");


		printf("� ����� ��ӵ��θ� ó�� %.0lf h ���� 0lfkm/h�� �ӷ����� �޸�  �Ÿ��� %.0lfkm�̰� %. �޸��� �ð��� %.0lf h �Դϴ�.\n", distance1, velocity1, time1);
		printf("�̶��� ��� �ӵ��� ������ �����ϴ�");
		printf("� ����� ��ӵ��θ� �ٽ� %.0lfkm�� %.0lfkm/h�� �ӷ����� �޸��� �ð��� %.0lf h �Դϴ�.\n\n", distance2, velocity2, time2);



	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		xf1 = distance1;
		xi1 = 0;
		tf1 = velocity1;
		ti1 = 0;
		xf2 = distance2;
		xi2 = 0;
		tf2 = velocity2;
		ti2 = 0;

		printf("(a) �� ����� ����������� ��� �ӷ��� ���ΰ�? \n");
		h1 = (xf1 - xi1) / (tf1 - ti1);
		h2 = (xf2 - xi2) / (tf2 - ti2);
		time1 = h1;
		time2 = h2;
		average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
		printf("�� ����� ����������� ��� �ӷ��� ������ �����ϴ�. : %.0lf m/s \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("���� ������ ���� = ���������� ���������� ��ġ��ȭ�Դϴ�.\n");
		printf("���� ������ s��� = ���� / (time1 + time2 + 1) �Դϴ�.\n"); //s = �ӵ�

		displacement = distance1 - distance2;
		printf("�� ����� � ��Ҹ� ���ٰ� �ǵ��� ���� ���� ������ �����ΰ�?\n");
		printf("�� ����� ����������� ������ ������ �����ϴ�. : %.0lf m/s \n\n", displacement);

	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");
		printf("(b) �� ����� ����������� ��� �ӵ��� ���ΰ�?\n");
		h1 = (xf1 - xi1) / (tf1 - ti1);
		h2 = (xf2 - xi2) / (tf2 - ti2);
		time1 = h1;
		time2 = h2;
		average_speed = displacement / (time1 + time2 + 1);
		printf("�� ����� ����������� ��� �ӵ��� ������ �����ϴ�. : %.0lf m/s \n", average_speed);


		printf("=================================================================\n");
		printf("\n\n\n");
	}




}

*/

void Excersize_2_15(int solution, int answer)  // �Ѷ���б� �̷������Ƽ���а� ������  2023.04.15 �̿Ϸ�

{
	double velocity = 120.0;
	double velocity0 = 0;
	double distance = 240.0;
	double accel = 0;
	double velocity_1 = 0;
	double velocity_m = 0;
	double m = 1000.0;
	double s = 3600.0;
	double num = 2;
	double a = 0;
	double a_1 = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %5.2lf km/h�̴�.\n\n", velocity);  // %5.2lf�� �Ʒ��� �����Ұ�
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %5.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("(a) �� ����Ⱑ Ȱ�ַθ� %5.2lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance);

		printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");  //���� ���ĵ� �̷��� �ٲټ���
		printf("�츮�� ���ؾ� �ϴ°� ���ӵ� �̹Ƿ� a(���ӵ�) = (v^2 - v0^2) / 2 * ��x�� ���·� �ٲپ� �ݴϴ�.\n\n");

		printf("���� �ӵ��� ������ km/h �� m/s �� �ٲ�� �մϴ�.\n");
		printf("1 km = 1000 m�� *1000 ��(��) ���ְ� 1h = 3600 s �̹Ƿ� /3600 s ��(��) ���ݴϴ�.\n");
		velocity_m = pow(velocity * m, 2) / pow(s, 2);
		printf("�׷��Ƿ� %5.2lf km/h = %5.2lf * 1000 / 3600 m/s = %5.2lf m/s �Դϴ�.\n\n", velocity, velocity, velocity_m);

		printf(" v^2�� ���߼ӵ� �̹Ƿ� (%5.2lf m/s)^2 �̰�,\n", velocity);   // 120�� ���߿� �ڵ��� �ٲ� ���̹Ƿ� ������ �ٲܰ�
		printf(" v0^2�� ó���ӵ� �̹Ƿ� (0)^2 �Դϴ�.\n");
		velocity_1 = velocity_m - pow(velocity0, 2);
		printf(" v^2 - v0^2�� ���� %5.2lf�Դϴ�.\n\n", velocity_1);

		printf("2 * a * x ���� x�� �Ÿ�(%5.2lf m)�� ���Ѵ�.\n\n", distance);
		a_1 = num * distance;
		a = velocity_1 / a_1;

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");  // ���� �ٲٰ�

		printf("���� v^2 - v0^2 = 2 * a * ��x �� �����ϸ�\n");  //���� ���ĵ� �̷��� �ٲټ���
		printf("(%5.2lf)^2 - (%5.2lf)^2 = 2 * a * %5.2lf �Դϴ�.\n", velocity, velocity0, distance);
		printf("���ӵ�(a)�� ���� ������ �����ϸ� a = %5.2lf �Դϴ�.\n", a);
		printf("��: a = %5.2lf m/s^2 \n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf(" (b)���� ���Ͽ��� �ϴ°��� �ð� �Դϴ�.\n\n ");

		printf("(b)���� �ʿ��� ������ v = v0 + a * t �Դϴ�.\n");
		printf("(v = %5.2lf) , (v0 = %5.2lf) , (a = %5.2lf) �Դϴ�.\n", velocity, velocity0, a);
		printf(" �ð��� ���ؾ� �ϹǷ� �ð�(t)�� ���� ������ �����ϸ� t = (v - v0) / a �� �˴ϴ�.\n");

		t = ((velocity * m) / s) / a;

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("���� v = v0 + a * t �� �����ϸ�\n");
		printf("(%5.2lf) = (%5.2lf) + (%5.2lf) * t �� �ǰ�\n", velocity, velocity0, a);
		printf(" �ð�(t)�� ���� ������ �����ϸ� t = (v - v0) / a �� �˴ϴ�.\n");
		printf("��: %5.2lf s.\n\n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_27(int solution, int answer)
{
	double height = 75.0;
	double velocity = 12.0;
	double t_square = 0;
	double half = 0.5;
	double gravity = -9.8;
	double t_1 = 0;
	double v0 = 12.0;
	double num = 0;
	double t = 0;
	double d = 0;
	double e = 0;
	double s_1 = 0;
	double ans_b = 0;
	double ans_c = 0;
	double gravity_1 = 9.8;
	double ans_c_1 = 0;

	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %.5.2lf m �� ���� ������ \n", height);
	printf("%.5.2lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�. \n\n", velocity);
	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("(a) ���� ���ؾ� �ϴ°��� �ð�(s) �Դϴ�.\n\n");

		printf("���� ������ y = v0 * t - 1 / 2 * g * t ^ 2 �Դϴ�.\n");
		printf("���⼭ ( y(����) = 75 m ) , ( v0(ó�� �ӵ�) = 12.0 m/s ) , ( g(�߷�) = 9.8 ) �Դϴ�.\n");
		printf("�Ŀ� �����ϸ� -75 = 12.0 t - 1/2 * 9.8 t^2 �Դϴ�.\n");
		printf("�̶� y �� (-)�� ���� ������ ���� �������� ������ �Ʒ� �̱� ������ (-)�� ������� �մϴ�.\n\n");

		printf("�ð�(s)�� ���Ϸ��� ���� ���� �������������� ���� �ؾ� �մϴ�.\n");
		printf("���������� ������ t^2 + t + num = ans �Դϴ�.\n");

		printf("-75 = 12.0 t - 1/2 * 9.8 t^2 �� ���� t^2 + t + num = ans ���·� �����ϸ� ���� ���ɴϴ�.\n\n");

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		t_square = half * gravity;
		t_1 = v0;
		num = height;
		printf("t^2 + t + num = ans ����\n");
		printf("t^2 ��: %5.2lf �̰�, t ��: %5.2lf , z ��: %5.2lf �̹Ƿ�\n", t_square, t_1, num);
		printf("t^2 + t + num = ans ���ٰ� ������ �ϸ�\n");
		d = t_1 * t_1 - 4.0 * t_square * num;
		e = sqrt(d);
		((-t_1 + e) / (2.0 * t_square) >= (-t_1 - e) / (2.0 * t_square));
		printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°� ���� �ɸ� �ð���\n");
		printf("��: t = %5.2lf s\n\n", (-t_1 - e) / (2.0 * t_square));

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		s_1 = (-t_1 - e) / (2.0 * t_square);
		printf("(b) ���� ���ؾ� �ϴ°��� �ӷ� �Դϴ�.\n");
		printf("���� ������ v = v0 - g * t �Դϴ�.\n");
		printf("(v ���߼ӵ�) , (v0 ó���ӵ�) , (g �߷�) , (t �ð�) �Դϴ�.\n");
		printf("�� �Ŀ� ������ �ϸ� v = %5.2lf m/s %5.2lf m/s^2 * %5.2lf s �Դϴ�.\n\n", velocity, gravity, s_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		ans_b = velocity + (gravity * s_1);
		printf("(b)��: %5.2lf m/s\n", ans_b);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n");

		printf("���� �� �Ÿ��� ���Ϸ��� �������� %5.2lf m + �ְ����� ���� �Ÿ�(m)�� �ʿ��ϴ�.\n");
		printf("���� ������ v^2 - v0^2 = 2 * a * ��y �Դϴ�.\n");
		printf("�� ���� �����Ƹ� ��y = v^2 / 2 * g �� �˴ϴ�.\n");
		printf("(v ó���ӵ� = %5.2lf) , (a �� g(�߷°��ӵ�) �̹Ƿ� = %5.2lf) �Դϴ�.\n\n", velocity, gravity_1);
		printf("���⿡ �⺻ ���� ������ %5.2lf m�� ������� �մϴ�.\n\n", height);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("���� ��y = v^2 / 2 * g �� �����ϸ� \n");
		printf("��y = (%5.2lf)^2 / 2 * (%5.2lf m/s) �Դϴ�\n.", velocity, gravity_1);
		ans_c = pow(velocity, 2) / (2 * gravity_1);
		printf("�ְ��� ������ �Ÿ��� %5.1lf m �Դϴ�.\n\n", ans_c);
		printf("(�ְ��������� �Ÿ� %5.1lf m) * 2 + (���� ���� %5.2lf m) �ϸ� ���� ���ɴϴ�.\n\n", ans_c, height);
		ans_c_1 = ans_c * 2 + height;
		printf("��: %5.2lf\n\n", ans_c_1);

		printf("=================================================================\n");
	}
}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	//Excersize_2_1(1,1);
	//Excersize_2_3(1,1);
	//Excersize_2_5(1, 1);
	Excersize_2_15(1, 1);
	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
	//Excersize_2_22(1, 0);
	Excersize_2_27(1, 1);


}

/*

void Excersize_2_1(int solution, int answer)
{
	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;

	printf("\n\n");
	printf("2-1 \n");
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�\n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);

	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ�?\n\n");
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ�?\n\n");
}

void Excersize_2_2(int solution, int answer)
{
	int h = 2;
	int m = 12;
	int s = 23;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("Ȳ���� ������ %4.1lf m�� %d�ð� %d�� %d�ʿ� �پ� ����Ͽ���.\n\n", distance1, h, m, s);
	printf("Ȳ���� ������ %4.1lf m�� ��� �� �ʿ� �޸� ���ΰ�?  \n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	int distance = 408;
	int T0 = 10;
	int hour = 12;
	int min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %d km�̴�\n", distance);
	printf("���� %d �ÿ� ���￪�� ����� KTX�� %d �� %d �� �λ꿪�� �����Ͽ���.\n\n", T0, hour, min);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("����� ���� �����ϰ� �ִ� ��ü�� ���� �������� ������� �� ��,\n");
	printf("��ü�� �̵��Ÿ��� �ð��� ������ �׸� P2-4�� ����.\n\n");
	printf("(a) ����Ͽ� %d s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�?\n\n", a_average_velocity);

	printf("(b) ��� �� %d s ���� �����ӷ��� �� m/s�ΰ�?\n\n", b_Instantaneous_speed);
}

void Excersize_2_5(int solution, int answer)
{
	int h = 1;

	int distance1 = 200;
	int velocity1 = 90;
	int distance2 = 200;
	int velocity2 = 50;

	printf("\n\n");
	printf("2-5 \n");
	printf("� ����� ��ӵ��θ� ó�� %d km�� %d km/h�� �ӷ����� �޸���, %d �ð����� ���ɽĻ縦 �� �Ŀ� �ٽ� %d km�� %d km/h�� �ӵ��� �޷��� �ǵ��ƿԴ�.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("�� ����� �����������(a) ��ռӷ°� (b) ��ռӵ��� ���϶�.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	int distance = 200;
	int sec = 25;

	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %d m Ʈ�� �� ������  %d s�� ����.\n\n", distance, sec);
	printf("������ (a) ��ռӷ°� (b) ��ռӵ��� ���϶�.\n\n");
	printf("(a) ��ռӷ�\n\n");
	printf("(b) ��ռӵ�\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("�׸��� x���� ���� 1������� �ϴ� ��ü�� ������ �ð� ���� �׷��� �̴�. \n");
	printf("�� �׷����� ���� �� ��ü�� � ���¸� �ð��뺰�� �����϶�.\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("���ӵ��� ���� +1�̶�� �ǹ̴�? \n\n");

	printf("(1) �ӵ��� ��ȭ�� ����.  \n");
	printf("(2) �ӵ��� ���� Ŀ����.  \n");
	printf("(3) �ӵ��� ���� �۾�����.\n");
	printf("(4) �ӵ��� �����ϴ�. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %4.1lf s��� �Ѵ�.\n\n", zero_back1);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	int accel = 1.7;
	int V = 90;
	int s = 110;


	printf("\n\n");
	printf("2-10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %d m/s^2�� ���ӵ��� �� �� �ִ�.\n\n", accel);
	printf("�� ������ %d km/h�� �ӵ�����\n", V);
	printf("%d km/h�� �����ϴµ� �ɸ��� �ð��� �󸶳� �ɱ�?\n\n", s);
}

void Excersize_2_11(int solution, int answer)
{
	int velocity = 90;
	int distance = 50;

	printf("\n\n");
	printf("2-11 \n");
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %d km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ������ %d m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", velocity, distance);
	printf("(a) �� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
}

void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("� �ڵ����� %d s ���ȿ� %d m/s ���� %d m/s�� ���ӵȴ�.\n\n", sec, V, V0);
	printf("(a) �� �ڵ����� ���ӵ��� ���ΰ�?  \n\n", acceleration);
	printf("(b) �� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�?  \n", distance);
}

void Excersize_2_13(int solution, int answer)
{
	int sec1 = 7;
	int sec2 = 5;

	printf("\n\n");
	printf("2-13 \n");
	printf("�ڵ����� ���� ���θ� �޸� ���� v-t �׷����̴�. \n\n");
	printf("(a) �� �ڵ����� a-t �׷����� �׸���. \n\n");
	printf("(b) �ڵ����� ó�� %d s ���� �̵��� �Ÿ��� ���ΰ�?\n\n", sec1);
	printf("(c) �� �ڵ����� ó�� %d s ������ ��ռӵ� �� ��հ��ӵ��� ���� ���ΰ� ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %d m/s�� �����ؾ� �Ѵ�.\n", speed);
	printf("%3.0lf m/s^2���� �����ϰ� �����Ѵٸ�\n\n", acceleration);
	printf("�̷��ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	int velocity1 = 120;
	int distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %d km/h�̴�.\n\n", velocity1);
	printf("(a) �� ����Ⱑ Ȱ�ַθ� %d m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance1);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}

void Excersize_2_16(int solution, int answer)
{
	int distance1 = 10000;
	double min = 30.0;
	int min2 = 27;
	int distance2 = 1100;
	double acceleration = 0.20;

	printf("\n\n");
	printf("2-16 \n");
	printf("� ���� ������ %d m�� %.1lf min �̳��� �����Ϸ��� �Ѵ�.\n\n", distance1, min);
	printf("��Ȯ�� %d min ���� �Ŀ� �޷��� �� �Ÿ��� %d m ���Ҵ�.\n\n", min2, distance2);
	printf("�׷��� �� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ��� %.2lf m/s^2 �� ���ӵ��� �� �� ���� �����ؾ� �ϴ°�?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	int speed1 = 10;
	int speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("ó���� �������� %.lf m/s �� �ӵ��� ��ϴ� ��ü�� ������ ������   \n", velocity1);
	printf("�ӵ��� ���Ͽ� %d s �� �������� %.lf m/s �� ��Ͽ���.     \n\n", speed1, velocity2);

	printf("(a) %d ���� �ӵ��� ��ȭ���� ���ΰ�?  \n\n", speed1);
	printf("(b) ���ӵ��� ũ��� ���̸�, �׹����� ��� �����ΰ�?  \n\n");
	printf("(c) ����� �� �� �� �ĸ� �ӵ��� %d �� �Ǵ°�?  \n\n", speed2);
	printf("(d) �ӵ��� %d �� �� ������ �̵��� �Ÿ��� ���ΰ�?  \n\n", speed2);
	printf("(e) ����� �� %d s ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	int velocity = 40;
	double speed = 0.50;
	int time = 1;
	int time2 = 1;

	printf("\n\n");
	printf("2-18 \n");
	printf("%d km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ ��������   \n", velocity);
	printf("������ ���ӵ� %.2lf m/s�������� ���ӵǾ���. \n\n", speed);

	printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n");

	printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n");

	printf("(c) �ڵ����� ó�� %d s ���� �̵��� �Ÿ��� �ټ� ���� %d s ���ȿ� �̵���  �Ÿ��� ���� ���ΰ�? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	int velocity = 120;
	int acceleration = 10;

	printf("\n\n");
	printf("2-19 \n");
	printf("%d km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %d km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s�� �޸��� �ڵ��� A��\n", Va);
	printf("%d m/s�� �޸��� �ڵ��� B�� ���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A�� %d s���� �ڵ��� B�� %d s���� �����Ͽ��� \n\n", Vb, V0a, V0b);
	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ϱ�?\n\n");
	printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� ���ϱ�?\n\n");
	printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ɸ��°�?\n\n");
	printf("(d) �ڵ��� A�� B�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���α�?\n\n");
}

void Excersize_2_21(int solution, int answer)
{
	int height = 360;

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %d m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", height);
	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");

	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("� ���̿��� %d m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", V);
	printf("(a) ���� ���� �� %d s ���� �ӵ��� ���϶�.\n\n", sec);
	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n", distance);
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("2-23 \n");
	printf("�����ϴ� ���� ���̰� %.1lf m �� â���� �������� �� %.1lf s �ɸ���.\n\n", high, sec);
	printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;

	printf("\n\n");
	printf("2-24 \n");
	printf("���̰� %39.2lf m�� 10�� ���󿡼�\n", height);
	printf("���� ����������� �ʼӵ� %d m/s�� ������.\n\n", second_velocity);
	printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�?\n\n");

	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	int distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("�︮���Ͱ� %.2lf m/s�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity1);
	printf("�������κ��� %d m ���̿��� â���� ���� ���ڸ� ����߷ȴ�. \n\n", distance1);
	printf("�� ���ڰ� ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	printf("(a) ���� %.1lf m���� �󸶳� ���� ��ϰڴ°�?\n\n", distance);
	printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(c) (b)���� ���� �� ���� ������ �����ΰ�?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %.lf m �� ���� ������             \n", high);
	printf("%.lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�. \n\n", velocity);

	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ַ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");
}

void Excersize_2_28(int solution, int answer)
{
	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ�  m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n");

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");
}

void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");
	printf("2-29 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	printf("�� ��� ���� �߸� ������ ����?\n\n");
}

int main(void)
{
	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_1(0, 0);
	Excersize_2_2(0, 0);
	Excersize_2_3(0, 0);
	Excersize_2_4(0, 0);
	Excersize_2_5(0, 0);
	Excersize_2_6(0, 0);
	Excersize_2_7(0, 0);
	Excersize_2_8(0, 0);
	Excersize_2_9(0, 0);
	Excersize_2_10(0, 0);
	Excersize_2_11(0, 0);
	Excersize_2_12(0, 0);
	Excersize_2_13(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_15(0, 0);
	Excersize_2_16(0, 0);
	Excersize_2_17(0, 0);
	Excersize_2_18(0, 0);
	Excersize_2_19(0, 0);
	Excersize_2_20(0, 0);
	Excersize_2_21(0, 0);
	Excersize_2_22(0, 0);
	Excersize_2_23(0, 0);
	Excersize_2_24(0, 0);
	Excersize_2_25(0, 0);
	Excersize_2_26(0, 0);
	Excersize_2_27(0, 0);
	Excersize_2_28(0, 0);
	Excersize_2_29(0, 0);
}

*/