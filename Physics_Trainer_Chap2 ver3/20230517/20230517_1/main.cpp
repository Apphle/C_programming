#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
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
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %6.2lf km/h 이다.\n\n", velocity_f);  // %5.2lf로 아래도 통일할것
	printf("(a) 이 비행기가 활주로를 %6.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", x_displacement);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");   // 수평운동의 경우

		printf("v: 나중속도, v0: 처음속도, a: 가속도, Δx: 거리변화량   \n\n");
		velocity_m_s = velocity_f / 3.6;
		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m\n\n", velocity_m_s, velocity, x_displacement);
		a = (pow(velocity_m_s, 2) - pow(velocity, 2)) / (2 * x_displacement);
		printf("a = (%6.2lf m/s)^2 / 2 * %6.2lf m\n", velocity_m_s, x_displacement);
		printf("  = %6.2lf m/s^2\n\n", a);

		//printf(" %lf", velocity_1);
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("a =  %6.2lf m/s^2\n", a);
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================   풀 이   =============================\n\n");

		printf("관련 공식은 v = v0 + a * t 입니다.\n");

		printf("v: 나중속도,  v0: 초기속도, a: 가속도, t: 시간\n\n");

		printf("v = %6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * t\n\n", velocity_m_s, velocity, a);
		time = velocity_m_s / (velocity + a);
		printf("t = %6.2lf m/s / %6.2lf m/s^2\n", velocity_m_s, a);
		printf("  = %6.2lf s\n\n", time);

	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

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
	printf("그림과 같이 높이가 %6.2lf m 의 절벽 끝에서 %6.2lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다.\n\n", height, velocity);
	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n");
		// your code here
		printf("관련공식은 y = y0 + v0 * t + 1/2 * a * t^2입니다. \n");

		printf("y:나중위치, y0:초기위치 , v0:초기속도,  t:시간, a:가속도 \n\n");

		printf("중력가속도는 아래 방향 이므로 -%6.2lf m/s^2 입니다.\n\n");

		printf("%6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * (%6.2lf m/s^2) * t^2\n\n", height, height_0, velocity, gravity);

		printf("at^2 + bt + c 형태로 풀이하시오.\n\n");
		a = 0.5 * gravity;
		b = velocity;
		c = height_0;
		printf("%6.2lft^2 + %6.2lft + %6.2lf\n\n", a, b, c);

		printf("=================================================================\n\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if (a == 0)
			printf("t=%5.2lf\n", -c / b);
		else
		{
			d = b * b - 4.0 * a * c;
			if (d >= 0)
			{
				printf("가속해야하는 시간 t=%5.2lf\n", sqrt(d) / ((2.0 * a)));
			}
			else
				printf("실근이 존재하지 않습니다\n");
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
		printf("=========================   정 답   =============================\n\n");



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