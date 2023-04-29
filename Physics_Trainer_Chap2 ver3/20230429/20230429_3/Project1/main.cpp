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
	double velocity = 120.0;
	double velocity0 = 0;
	double distance = 240.0;
	double accel = 0;
	double velocity_m = 0;
	double a = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %6.2lf km/h 이다.\n\n", velocity);  // %5.2lf로 아래도 통일할것
	printf("(a) 이 비행기가 활주로를 %6.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
		printf("v는 나중속도(m/s), v0는 처음속도(m/s), a는 가속도(m/s^2), Δx는 거리(m) 입니다.\n\n");

		printf("가속도를 구하기 위해서 단위 km/h 를 m/s 로 맞춰줘야 합니다.\n");
		printf("1km = 1000 m 이므로 ( *1000 )을(를) 해주고 ,1h = 3600 s 이므로 ( /3600 )을(를) 해줍니다.\n");
		velocity_m = velocity * 1000 / 3600;
		printf("따라서 %6.2lf km/h * 1000 / 3600 = %6.2lf m/s 입니다.\n\n", velocity, velocity_m);

		printf("v는 이륙하기 위해 필요한 속도 이므로 v = (%6.2lf m/s) 이고,\n", velocity_m);
		printf("v0는 멈춰 있을때의 속도 이므로 v0 = (%6.2lf m/s) 입니다.\n", velocity0);
		printf("Δx는 비행기가 달린 활주로의 거리 이므로 Δx = (%6.2lf m) 입니다.\n\n", distance);

		a = pow(velocity_m, 2) / (2 * distance);

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("공식: v^2 - v0^2 = 2 * a * Δx\n");
		printf("대입하면 (%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * (%6.2lf m) 입니다.\n\n", velocity_m, velocity0, distance);
		printf("가속도의 계산은 속도의 차이를 거리로 나누어 구합니다.\n\n");
		printf("가속도 구하는 공식: a = (v^2 - v0^2) / (2 * Δx)\n\n");
		printf("대입하면 a = (%6.2lf m/s^2 - %6.2lf m/s^2) / (2 * %6.2lf m)\n\n", velocity_m, velocity0, distance);
		printf("답: a = %6.2lf m/s^2 \n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("관련 공식은 v = v0 + a * t 입니다.\n");
		printf("v는 나중속도(m/s), v0는 처음속도(m/s), a는 가속도(m/s^2), t는 시간(s) 입니다.\n\n");

		printf("v는 이륙하기 위해 필요한 속도 이므로 v = (%6.2lf m/s) 이고,\n", velocity_m);
		printf("v0는 멈춰 있을때의 속도 이므로 v0 = (%6.2lf m/s) 입니다.\n", velocity0);
		printf("a는 가속도 이므로 a = (%6.2lf m/s^2) 입니다.\n\n", a);

		t = ((velocity * 1000) / 3600) / a;

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("공식: v = v0 + a * t\n");
		printf("대입하면 (%6.2lf m/s) = (%6.2lf m/s) + (%6.2lf m/s^2) * t 입니다.\n\n", velocity_m, velocity0, a);

		printf("시간의 계산은 속도의 차이를 가속도로 나누어 구합니다.\n\n");
		printf("시간 구하는 공식: t = (v - v0) / a \n\n");
		printf("대입하면 t = (%6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2 입니다.\n\n", velocity_m, velocity0, a);

		printf("답: %6.1lf s\n\n", t);

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