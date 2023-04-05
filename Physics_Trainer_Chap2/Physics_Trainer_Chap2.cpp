#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("그림은 x축을 따라 1차원운동을 하는 물체의 변위와 시간 관계 그래프 이다. \n");
	printf("이 그래프를 보고 이 물체의 운동 상태를 시간대별로 설명하라. \n\n");
}


void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	double speed1 = 10.0;
	double speed2 = 0.0;


	printf("\n\n");
	printf("2-17 \n");
	printf("처음에 동쪽으로 %.lf m/s 의 속도로 운동하던 물체가 일정한 비율로 \n", velocity1);
	printf("속도가 변하여 %.lf s 후 서쪽으로 %.lf m/s 로 운동하였다. \n\n", speed1, velocity2);

	printf("(a) %.lf s 동안 속도의 변화량은 얼마인가? \n\n", speed1);
	printf("(b) 가속도의 크기는 얼마이며, 그 방향은 어느 방향인가? \n\n");
	printf("(c) 출발한 지 몇 초 후에 속도가 %.lf s 이 되는가? \n\n", speed2);
	printf("(d) 속도가 %.lf s 이 될 때까지 이동한 거리는 얼마인가? \n\n", speed2);
	printf("(e) 출발한 지 %.lf s 후의 변위와 이동한 거리는 각각 얼마인가? \n\n", speed1);
}


void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("그림과 같이 높이가 %.lf m 의 절벽 끝에서 \n", high);
	printf("%.lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다. \n\n", velocity);

	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가? \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가? \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가? \n\n");
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_7(0,0);
	Excersize_2_17(0, 0);
	Excersize_2_27(0, 0);
}
