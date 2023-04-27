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
	double velocity_1 = 0;
	double velocity_m = 0;
	double m = 1000.0;
	double s = 3600.0;
	double a = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %4.2lf km/h이다.\n\n", velocity);  // %5.2lf로 아래도 통일할것
	printf("(a) 이 비행기가 활주로를 %4.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("(a) 이 비행기가 활주로를 %4.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance);

		printf("속도의 단위 km/h 를 m/s 로 바꿔야 합니다.\n");
		printf("1km * 1000 m / 1h * 3600 s = 1 / 3.6으로 나눠줍니다.\n");
		velocity_m = velocity * m / s;
		printf("따라서 %4.2lf km/h = %4.2lf km/h / 3.6 = %4.2lf m/s 입니다.\n\n", velocity, velocity, velocity_m);

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n"); 
		printf("v^2은 나중속도 이므로 %4.2lf m/s^2 이고,\n", velocity_m); 
		printf("v0^2은 처음속도 이므로 0 m/s 입니다.\n");
		printf("v^2 - v0^2 =  %4.2lf m/s 입니다.\n\n", pow(velocity_m, 2));

		printf("2 * a * x 에서 x는 거리 %4.2lf m을 말합니다.\n\n", distance);

		a = pow(velocity_m, 2) / (2 * distance);

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");  

		printf("공식 v^2 - v0^2 = 2 * a * Δx 에 대입하면\n"); 
		printf("%4.2lf m/s^2 - %4.2lf^2 = 2 * a * %4.2lf m 입니다.\n", velocity_m, velocity0, distance);
		printf("a = %4.2lf m/s^2 / (2 * %4.2lf m)\n\n", velocity_m, distance, a);
		printf("답: a = %4.2lf m/s^2 \n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("(b)에서 구하여야 하는 것은 시간 입니다.\n\n");

		printf("(b)에서 필요한 공식은 v = v0 + a * t 입니다.\n");
		printf("v = %4.2lf m/s, v0 = %4.2lf m/s, a = %4.2lf m/s^2 입니다.\n", velocity_m, velocity0, a);
		printf("시간을 구해야 하므로 시간(t)에 대한 식으로 정리하면 t = (v / 3.6)^2 / a 가 됩니다.\n");

		t = ((velocity * m) / s) / a;

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("공식 v = v0 + a * t 을(를)\n");
		printf("시간(t)에 대한 식으로 정리하면 t = (v - v0) / a 가 되고\n");
		printf("t = (%4.2lf m/s - %4.2lf m/s) / %4.2lf m/s^2 가 됩니다.\n", velocity_m, velocity0, a);

		printf("답: %4.2lf s\n\n", t);

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

