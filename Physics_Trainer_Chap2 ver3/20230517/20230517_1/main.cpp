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
