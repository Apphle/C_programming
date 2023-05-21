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
	printf("그림과 같이 높이가 %6.2lf m 의 절벽 끝에서 %6.2lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다.\n\n", height, velocity_i);
	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");

	if (solution == SHOW)
	{
	
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		printf("관련공식은 y = y0 + v0 * t + 1/2 * a * t^2입니다. \n");

		printf("y:나중위치, y0:초기위치 , v0:초기속도,  t:시간, a:가속도 \n\n");

		printf("중력가속도 a 는  아래 방향 이므로 %6.2lf m/s^2 입니다.\n\n");

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
		printf("=========================   정 답   =============================\n\n");
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
		printf("=========================   풀 이   =============================\n");
		printf("\n");
		printf("관련 공식은 v = v0 + a x t 입니다.\n");

		printf("v:나중속도,  v0:초기속도, a:가속도, t:시간\n\n");

		printf("%6.2lf m/s = %6.2lf m/s + %6.2lf m/s^2 * %6.2lf s \n", velocity_f, velocity_i, gravity, (-b - e) / (2.0 * a));
		ans_1 = velocity_i + gravity * ((-b - e) / (2.0 * a));
		printf("           = %6.2lf m/s\n\n", ans_1);
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("v = %6.2lf m/s\n\n", ans_1);
	}
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n");   // 수직운동의 경우

		printf("v:나중속도, v0:처음속도, a:가속도, Δy :거리변화량   \n\n");

		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * %6.2lf m/s^2 * Δy\n\n", velocity_f, velocity_i, gravity);
		printf("Δy = ( (%6.2lf m/s)^2 - (%6.2lf m/s)^2 ) / ( 2 * %6.2lf m/s^2 )  \n", velocity_f, velocity_i, gravity);
		ans_2 = (velocity_f - pow(velocity_i,2)) / (2 * gravity);
		printf("    = %6.2lf m\n\n", ans_2);

		printf("Δy = %6.2lf * 2 + %6.2lf\n", ans_2, height_0);
		total_distance = ans_2 * 2 + height_0;
		printf("    = %6.1lf m\n", total_distance);

	}
	if (answer == SHOW)
	{
		printf("\n");
		printf("=========================   정 답   =============================\n\n");

		printf(" Δy = %6.1lf m\n\n", total_distance);

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