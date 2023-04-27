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
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("관련 공식은 Vector의 성분 분해입니다.\n");
		printf("먼저 각 이동 거리를 x,y축으로 성분 분해를 하세요.\n");

		//   2023.04.07 추가 //
		printf("북쪽을 Y축으로 동쪽을 X 축으로 좌표축을 정합니다.\n\n");
		printf("북쪽으로 %4.1lf km를 날아간 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n");

		x_displacement1 = north_distance1 * cos(DEG2RAD(90));
		y_displacement1 = north_distance1 * sin(DEG2RAD(90));

		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement1, y_displacement1);

		printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아간 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n", south_distance);

		x_displacement2 = south_distance * cos(DEG2RAD(-90));
		y_displacement2 = south_distance * sin(DEG2RAD(-90));
		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement2, y_displacement2);

		printf("다시 북쪽으로 %4.1lf km를 날아 착륙한 이동에 대한 X 변위, Y 변위는 다음과 같습니다.\n", north_distance2);

		x_displacement3 = north_distance2 * cos(DEG2RAD(90));
		y_displacement3 = north_distance2 * sin(DEG2RAD(90));

		printf("X 변위 :  %.2lf km, Y 변위 :  %.2lf km \n\n", x_displacement3, y_displacement3);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		x_displacement = x_displacement1 + x_displacement2 + x_displacement3;

		printf("X 변위 합은 다음과 같습니다. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", x_displacement, x_displacement1, x_displacement2, x_displacement3);

		y_displacement = y_displacement1 + y_displacement2 + y_displacement3;

		printf("Y 변위 합은 다음과 같습니다. \n%.2lf km = %.2lf km +  %.2lf km  + %.2lf km\n\n", y_displacement, y_displacement1, y_displacement2, y_displacement3);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");

	if (solution == SHOW)
	{

	}

	if (answer == SHOW)
	{


	}

}
*/

void Excersize_2_1(int solution, int answer)  // 한라대학교 미래모빌리티공학과 고지환  2023.04.14 완료
{

	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;
	double x_displacement = 0.0;
	double displacement = 0.0;

	printf("\n\n");
	printf("2-1 \n");
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고   \n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);
	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   =============================\n");
		printf("관련 공식은 북쪽으로 이동한 값은 더하고 남쪽으로 이동한 값은 빼는 것입니다. \n");

		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		displacement = x_displacement - south_distance;
		printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가 ? \n\n");
		printf("대형기동헬기가 기지로부터 마지막 도착지점은 다음과 같습니다. : %4.1lf km\n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련 공식은 총 움직인거리의 총합입니다. \n");
		x_displacement = north_distance1 + north_distance2;
		printf("대형기동헬기가 북쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n", x_displacement);

		printf("대형기동헬기가 남쪽으로 이동한거리는 %4.1lf km는 다음과 같습니다. \n\n", south_distance);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가 ? \n\n");
		displacement = x_displacement + south_distance;
		printf("대형기동헬기가 총 움직인 거리의 합은 다음과 같습니다. : %4.1lf km \n", displacement);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

/*
void Excersize_2_3(int solution, int answer)   // 한라대학교 미래모빌리티공학과 김종선  2023.04.14 미완료
{
	double distance = 408000.0; // 408km 를 m로 변환한 값
	double time1 = 10.0;
	double time = 9420;        // 2시간 37분을 초로 변환한 값
	double time_h = 12.0;
	double time_m = 37.0;
	double velocity = 0.0;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %d km이다\n", distance);
	printf("오전 %d 시에 서울역을 출발한 KTX가 %d 시 %d 분 부산역에 도착하였다.\n\n", time1, time_h, time_m);

	printf("열차의 평균속력은 몇 m/s인가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("먼저 평균 속력의 공식을 구하세요.\n\n");
		printf("평균 속력의 공식은 : V평균 = (Xf - Xi) / (Tf - Ti) 입니다.\n\n");

		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		velocity = distance / time;

		printf("평균속력을 구하는 법은 다음과 같습니다.\n%.2lf m/s = %.2lf m / %.2lf s\n\n", velocity, distance, time);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
*/

void Excersize_2_3(int solution, int answer) // 한라대학교 미래모빌리티공학과 김종선  2023.04.15 완료
{
	double distance = 408.0;
	double distance_0 = 0.0;
	double time_0 = 10.0;
	double time_h = 12.0;
	double time_m = 37.0;
	double time_x = 157;
	double time_s = 60;
	double time_f = 9420;
	double velocity = 43.3;


	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %.0lf km이다\n", distance);
	printf("오전 %.0lf 시에 서울역을 출발한 KTX가 %.0lf 시 %.0lf 분 부산역에 도착하였다.\n\n", time_0, time_h, time_m);

	printf("열차의 평균속력은 몇 m/s인가?\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		// your code here
		printf("이 문제를 해결하기 위해서는 평균 속력을 구해야합니다. \n\n");
		printf("따라서 평균 속력의 공식은 : vavg = (vf - vi / tf - ti)입니다 \n\n");
		printf("나중거리 vf는 %.0lfkm이고, 처음거리는 %.0lfkm입니다. \n", distance, distance_0);
		printf("나중시간은 %.0lf h %.0lf m이고, 처음시간은 %.0lf h입니다.\n", time_h, time_m, time_0);
		printf("평균속력은 %.0lfkm - %.0lfkm / %.0lfh %.0lfm - %.0lfh이며\n", distance, distance_0, time_h, time_m, time_0);
		printf("km/h 를 m/s로 변환해보면\n");
		printf("km는 m에 1000을 곱하면 되고,\n'h'에 3600을 곱하여 's'를 구하고 'm'에 60을 곱하여 's'를 구힙니다\n");
		printf("따라서 %.0lfkm = %.0lfkm * 1000 = 408000m이고\n2h 37m = 2h * 3600 + 37m * 60 = %.0lfs입니다\n", distance, distance, time_f);

		
		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");


		printf("km/h에서 m/s로 변환한 값을 거리를 시간으로 나누면 됩니다\n");
		printf("따라서 %.0lf x 1000 / %.0lf = %.1lf이므로\n답은 %.1lf 입니다\n", distance, time_f, velocity, velocity);



		printf("=================================================================\n");
		printf("\n\n\n");
	}

}


void Excersize_2_5(int solution, int answer)  // 한라대학교 미래모빌리티공학과 김종선  2023.04.14 완료
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
	double time3 = 1;
	double displacement = 0;
	double average_velocity = 0;
	double average_speed = 0;


	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %6.2lf km는 %6.2lf km/h의 속력으로 달리고, \n", distance1, velocity1);
	printf("1시간 동안 점심식사를 한 후에 다시 %6.2lf km를 %6.2lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");		
		printf("관련 공식은  거리(Δx) = 속력(v) x 시간(t) 입니다.\n\n");

		printf("%6.2lf km를 %6.2lf km/h로 갈 때 걸린 시간은 %6.2lfkm(갈 때의 이동거리) / %6.2lfkm/h(갈 때의 속력) = %6.2lfh(걸린 시간)이다. \n", distance1, velocity1, distance1, velocity1, time1);
		printf("%6.2lf km를 %6.2lf km/h로 올 때 걸린 시간은 %6.2lfkm(올 때의 이동거리) / %6.2lfkm/h(올 때의 속력) = %6.2lfh(걸린 시간)이다. \n", distance2, velocity2, distance2, velocity2, time2);
		printf("점심시간 식사를 하는데 걸리는 시간은 %6.2lfh이다.\n\n", time3);

		all_time = time1 + time2 + time3;
		printf("총 걸린시간은 %6.2lfh(갈 때의 시간) + %6.2lfh(올 때의 시간) + %6.2lfh(식사 한 시간) = %6.2lfh이다. \n\n", time1, time2, time3, all_time);

		all_distance = distance1 + distance2;
		printf("총 이동한 거리는 %6.2lfkm(갈 때의 거리) + %6.2lfkm(올 때의 거리) = %6.2lfkm이다. \n\n\n", distance1, distance2, all_distance);



	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n\n");

		printf("관련 공식은 평균 속력(average_velocity) = 총 이동 거리(all_distance) / 총 걸린 시간(all_time)이다.  vavg = Δx/Δt\n\n");

		all_distance = distance1 + distance2;
		printf("총 이동 거리: %6.2lfkm \n\n", all_distance);

		all_time = time1 + time2 + time3;
		printf("총 걸린 시간: %6.2lfh \n\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + time3);
		printf("평균 속력은 %6.2lfkm(총 이동 거리) / %6.2lfh(총 걸린 시간) = %6.2lfkm/h(평균 속력) \n", all_distance, all_time, average_velocity);
		printf("이 사람의 여행과정에서 평균 속력: %6.2lfkm/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
		printf("관련 공식은 평균 속도(average_speed) = 변위(displacement) / 총 걸린 시간(all_time)입니다.\n\n");

		displacement = distance1 - distance2;
		printf("변위는 %6.2lfkm(갈 때의 거리) - %6.2lfkm (올 때의 거리) = %6.2lfkm(변위)이다.\n\n", distance1, distance2, displacement);

		all_time = time1 + time2 + time3;
		printf("이 사람의 여행과정에서 총 걸린시간은 %6.2lfh(갈 때의 시간)+ %6.2lfh(올 때의 시간) + %6.2lfh(식사 한 시간) = %6.2lfh이다. \n\n\n", time1, time2, time3, all_time);

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
		printf("이 사람의 여행과정에서 평균 속도는 변위 / 총 걸린 시간이다.\n");

		displacement = distance1 - distance2;
		printf("변위: %6.2lfkm\n\n", displacement);

		all_time = time1 + time2 + 1;
		printf("총 걸린 시간: %6.2lfh\n\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("평균 속도는 %6.2lfkm(변위) / %6.2lfh(총 걸린 시간) = %6.2lfkm/h(평균 속도) \n", displacement, all_time, average_speed);
		printf("이 사람의 여행과정에서 평균 속도: %6.2lf km/h \n", average_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

void Excersize_2_9(int solution, int answer) // 한라대학교 미래모빌리티공학과 설동민  2023.04.19 미완료
{
	double zero_back1 = 7.1;
	double zero_back2 = 11.2;
	double ti1 = 0;
	double tf1 = 11.2;
	double vi1 = 0;
	double vf1 = 100;
	double ti2 = 0;
	double tf2 = 0;
	double vi2 = 0;
	double vf2 = 0;
	double answer1 = 0;
	double answer2 = 0;


	printf("\n\n");
	printf("2-9 \n");
	printf("========================   문제   =============================\n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 합니다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
	printf("=================================================================\n\n\n\n\n");

	if (solution == SHOW)
	{
		printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
		printf("Δv는 xf(나중 속력) - xi(처음 속력) 이므로\n");
		printf("Δv = %6.2lf - %6.2lf 입니다. \n\n", vf1, vi1);
		printf("Δt는 tf(나중 시간) - ti(처음 시간) 이므로.\n");
		printf("Δt = %6.2lf - %6.2lf 입니다. \n\n", tf1, ti1);



		printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n\n");
		printf("1 km = 1000 m 로 *1000 을 해주고 h = 3600 s 이므로 /3600 으로 해줍니다. \n");
		printf("가속도 a = 100 * 1000 / 3600m/s / 7.10s 입니다. \n", vf1, zero_back1);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{
		answer1 = ((vf1 * 1000 / 3600) - vi1) / (tf1 - ti1);
		printf("=========================   정 답   =============================\n");
		printf("관련 공식 (vf - vi) / (tf - ti) Δx에 대입하면");
		printf("(100 * 1000 / 3600m/s / 7.10s) 입니다.\n\n", vf1, zero_back1);
		printf("따라서 이 자동차의 가속도(a)는 %3.2lf m/s^2 입니다.\n", answer1);
		printf("=================================================================\n\n\n\n\n");
	}



	if (solution == SHOW)
	{
		tf2 = zero_back2;
		printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
		printf("========================   풀이   =============================\n");
		printf("관련 공식은 가속도 공식 = (Δv / Δt)입니다.\n");
		printf("Δv는 xf(나중 속력) - xi(처음 속력) 이므로\n");
		printf("Δv = %6.2lf - %6.2lf 입니다. \n\n", vf2, vi2);
		printf("Δt는 tf(나중 시간) - ti(처음 시간) 이므로\n");
		printf("Δv = %6.2lf - %6.2lf 입니다. \n\n", tf2, ti2);



		printf("(a)문제와 똑같이 해답인 가속도를 구하기 위해서는 km/h 를 m/s^2 으로 단위를 맞춰야 합니다. \n\n");
		printf("1 km = 1000 m 로 *1000 을 해주고 h = 3600 s 이므로 /3600 을 해줍니다. \n");
		printf("그러므로 공식의 풀이는 100 * 1000 / 3600m/s / 11.2s 입니다. \n", vf2, zero_back2);
		printf("=================================================================\n");
	}

	if (answer == SHOW)
	{
		answer2 = ((vf2 * 1000 / 3600) - vi2) / (tf2 - ti2);
		printf("=========================   정 답   =============================\n");
		printf("관련 공식 (vf - vi) / (tf - ti) Δx에 대입하면");
		printf("(100 * 1000 / 3600m/s / 11.2s) 입니다.\n\n", vf2, zero_back2);
		printf("따라서 이 자동차의 가속도(b)는 %6.2lfm/s^2 입니다.\n\n", answer2);
		printf("=================================================================\n");
	}
}

void Excersize_2_10(int solution, int answer)
{


	double v = 90.0;
	double v1 = 110.0;
	double v0 = 30.56;
	double v2 = 25.0;
	double a = 1.7;
	double t = 3.06;

	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %.2lf m/s^2 의 가속도를 낼 수 있다.\n\n", a);

	printf("이 비율로 %.2lf km/h 에서 %.2lf km 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", v, v1);


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n\n");

		printf("관련 공식은 a=(v-v0)/◇t [시간=(최종속도-초기속도)/가속도] 이다.\n");
		printf("v=최종속도, v0=초기속도 , a=가속도 , ◇t=시간 \n");
		printf("가속도와 초기속도 , 최종속도의 미터와 초가 안맞으니 맞혀줍니다. \n");
		printf("초기 속도 = %.2lf km/h = %.2lf m/s , 최종 속도 = %.2lf km/h = %.2lf m/s 로 바꿔줍니다. \n", v0, v2, v1, v);
		printf("이때 가속도는 등가속도라고 가정할 수 있으므로 다음과 같은 등가속도운동의 공식을 사용합니다. \n");
		printf("a=(v-v0)/◇t 에서 t를 구해야되니 t를 넘겨줍니다. \n");
		printf("넘겨준 ◇t=(v-v0)/a 공식에 바꿔준 수를 대입 해 줍니다 .\n");
		printf("◇t = ( %.2lf m/s - %.2lf m/s) / %.2lf m/s^2 , ◇t = %.2lf s \n", v0, v2, a, t);
		printf("이 자동차는 %.2lf km/h 에서 %.2lf km/h 로 가속하는데에는 \n", v, v1, t);


		printf("\n=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("따라서 ◇t=(v-v0)/a 에는 %.2lf 가 소요된다. \n", t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_11(int solution, int answer)  // 한라대학교 미래모빌리티공학과 원유빈  2023.04.15 완료
{
	double velocity = 90;
	double velocity_m_s = 0;
	double distance = 50;
	double acceleration = -6.25;
	double velocity_i = 90;
	double velocity_f = 0;
	double x_displacement = 50;

	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %6.2lf km/h의 속도로 달리다가 브레이크를 밟은 후 %6.2lf m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", velocity, distance);
	printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 이다.\n");
		printf("v는 나중 속도, v0는 처음 속도, a는 가속도, Δx는 위치의 변화량이다.\n\n");

		velocity_m_s = velocity * 1000 / 3600;

		printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s (으)로 단위를 맞춰줘야 한다.\n");
		printf("1 km = 1000 m로 *1000 을(를) 해주고 h = 3600 s 이므로 /3600 s 을(를) 해준다.\n");
		printf("그러므로 %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s 이다.\n\n", velocity, velocity, velocity_m_s);

		printf("이후에 v, v0,Δx를 구하고 이를 활용하여 a를 구해주면 된다.\n");
		printf("v는 나중 속도로 브레이크를 밟은 후 정지했을 때 속도이므로 v = %6.2lf m/s 이다.\n", velocity_f);
		printf("v0는 처음 속도로 %6.2lf km/h 달리던 자동차의 속도로 v = %6.2lf m/s 이다.\n", velocity, velocity_i);
		printf("Δx는 위치의 변화량으로 %6.2lf m 을(를) 움직였으므로 Δx = %6.2lf m 이다.\n", distance, x_displacement);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("관련 공식 v^2 - v0^2 = 2 * a * Δx에 대입하면\n");
		printf("(%6.2lf m/s)^2 - (%6.2lf m/s)^2 = 2 * a * %6.2lf m 이다.\n", velocity_f, velocity_m_s, x_displacement);
		printf("따라서 a에 대해 정리를 하면 a = %6.2lf m/s^2 이다\n", acceleration);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_15(int solution, int answer)  // 한라대학교 미래모빌리티공학과 이재혁  2023.04.15 미완료
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

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");  //밑의 공식도 이렇게 바꾸세요

		printf("속도의 단위 km/h 를 m/s 로 바꿔야 합니다.\n");
		printf("1km * 1000 m / 1h * 3600 s = 1 / 3.6으로 나눠줍니다.\n");
		velocity_m = velocity * m / s;
		printf("따라서 %4.2lf km/h = %4.2lf km/h / 3.6 = %4.2lf m/s 입니다.\n\n", velocity, velocity, velocity_m);

		printf("v^2은 나중속도 이므로 %4.2lf m/s^2 이고,\n", velocity_m);   // 120은 나중에 자동을 바뀔 값이므로 변수로 바꿀것
		printf("v0^2은 처음속도 이므로 0 m/s 입니다.\n");
		printf("v^2 - v0^2 =  %4.2lf m/s 입니다.\n\n", pow(velocity_m, 2));

		printf("2 * a * x 에서 x는 거리 %4.2lf m을 말합니다.\n\n", distance);

		a = pow(velocity_m, 2) / (2 * distance);

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");  // 공식 바꾸고

		printf("공식 v^2 - v0^2 = 2 * a * Δx 에 대입하면\n");  //밑의 공식도 이렇게 바꾸세요
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


void Excersize_2_19(int solution, int answer) // 한라대학교 미래모빌리티공학과 최준혁  2023.04.16 완료
{
	double velocity = 120;
	double police_velocity = 0;
	double acceleration = 10;
	double converted_acceleration = 2.78;
	double distance = velocity / 3.6;
	double a, b, c = 0, d, e = 0.0;

	a = 0.5 * converted_acceleration;
	b = -1 * (velocity / 3.6);
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-19 \n");
	printf("%.lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %.lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("(a) 문제를 풀기 위해서는 혼합된 단위의 가속도를 정리해야 합니다. \n");
		printf("km/h/s를 m/s로 변환합니다.\n\n");

		printf("a = %.lf km/h/s = %.lf km/h/s * 1000m/1km * 1h/3600s * 1/s = %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("과속 운전자가 t초 동안 달린 거리는 다음과 같습니다. (x1):\n");
		printf("x1 = v0t + 1/2 * a * t^2 = %.1lf m\n\n ", velocity / 3.6);

		printf("경찰차가 t초 동안 달린 거리는 다음과 같습니다. (x2):\n");
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 1/2 * %.1lf * t^2 m\n\n", velocity / 3.6);

		printf("과속 운전자가 붙잡히는 순간은 두 자동차의 거리가 같을 때입니다.\n");
		printf("%.1lf m/s = 1/2 * %.2lf m/s^2 * t^2\n\n", velocity / 3.6, converted_acceleration, acceleration / 3.6);

		printf("두 식의 이차방정식 : t^2 + %.2lft - %.1lf = 0\n", converted_acceleration, velocity / 3.6);
		printf("이차방정식의 해를 구하면 x1 = %.lf s, x2 = %.lf s입니다.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("이때 처음 달리기 시작한 시간인 0 s는 답이 될 수 없습니다.\n\n ");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("속도를 구하기 위해서는 v^2 - v0^2 = 2as 공식을 사용해야 합니다.\n");
		printf("이때 v0^2는 처음속도로, 차가 정지해 있다가 출발했기 때문에 0 입니다.\n");
		printf("v^2 = 2 * %.2lf m/s * %.lf m\n", converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("이때 v^2 이므로 v = sqrt(%.lf m/s) = %.lf m/s\n", 2 * converted_acceleration * distance, police_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 경찰차의 속도는 다음과 같습니다.\n");
		printf("v = %.1lf m/s = %.lf km/h\n\n", police_velocity, police_velocity * 3.6);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}


void Excersize_2_21(int solution, int answer)  // 한라대학교 미래모빌리티공학과 고지환 2023.04.16 완료
{
	double h = 380;
	double h0 = 0;
	double g = 9.8;
	double t = 0;
	double v = 0;
	double v0 = 0;
	double y0 = 0;
	double initialvelocity = 0;

	printf("\n\n");
	printf("2-21 \n");
	printf("만약 높이가 %6.2lf m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", h);
	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련공식은 y = y0 + v0 * t + 1/2 * a * t^2입니다. \n");
		printf("y는 높이, y0는 처음높이, v0는 처음속도, t는 시간, a는 가속도입니다.\n");
		printf("자유낙하 운동이므로 가속도(=a)는 중력가속도(=g)로 변환됩니다.\n");
		printf("중력가속도는 %6.2lf m/s^ 2입니다.\n", g);
		printf("관련공식에 중력가속도를 대입하여 y = y0 + v0 * t + 1/2 * g * t ^ 2으로 식 변환이 됩니다.\n");
		printf("v0는 처음속도이므로 %6.2lf m/s 입니다.\n", initialvelocity);
		printf("이후에 식을 정리하여 t값을 구해주면 된다.\n");
		printf("식은 %6.2lf m = %6.2lf m + %6.2lf m/s * t + 1/2 * %6.2lf m/s^2 * t^ 2가 됩니다.\n", h, y0, v0, g);
		printf("식은 %6.2lf m = 1/2 * %6.2lf m/s^2 * t^2 입니다.\n", h, g);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		t = sqrt(2 * h / g);
		printf("관련공식을 정리한 %6.2lf m = 1/2 * %6.2lf m/s^2 * t^2 식에 대입하면\n\n", h, g);
		printf("따라서 t = sqrt(2 * %6.2lf m / %6.2lf m/s^2)이다.\n\n", h, g);
		printf("그러므로 (2 * %6.2lf m / %6.2lf m/s^2)을 풀면 %6.2lf s의 값이 나온다.\n\n", h, g, t);

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("관련 공식은  v = v0 + a * t입니다. \n");
		printf("v는 나중속도, v0는 처음속도, a는 가속도, t는 시간입니다.\n");
		printf("자유낙하 운동이므로 가속도(=a)는 중력가속도(=g)로 변환됩니다.\n");
		printf("중력가속도는 %6.2lf m/s^ 2입니다.\n", g);
		printf("관련공식에 중력가속도를 대입하여 v = v0 + g * t으로 식 변환이 됩니다.\n");
		printf("v0는 처음 속도이므로 %6.2lf m/s이다.\n", initialvelocity);
		printf("이후에 식을 정리하여 나중속도값을 구해주면 된다.\n");
		printf("식은 v = %6.2lf m + %6.2lf m/s^2 * t가 됩니다.\n", v0, g);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		t = sqrt(2 * h / g);
		v = g * t;
		printf("관련공식을 정리한 v = %6.2lf m + %6.2lf m/s^2 * t 식에 대입하면\n\n", v0, g);
		printf("따라서 문제 a 에서 구한 시간(t)를 대입하여 v = %6.2lf m + %6.2lf m/s^2 * %6.2lf m/s^2 입니다.\n\n", v0, g, t);
		printf("그러므로 %6.2lf m/s^2 * %6.2lf m/s^2 식을 정리하고  %6.2lf m를 더하게 되면 속도는 %6.2lf m/s이다. \n", g, t, v0, v);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}


void Excersize_2_25(int solution, int answer)    // 한라대학교 미래모빌리티공학과 최준혁 2023.04.16 완료
{
	double velocity = 5.50;
	double height = 100;
	double gravity_accel = 9.80;
	double time = 0.0;

	double a, b, c = 0, d, e = 0.0;

	a = -gravity_accel / 2;
	b = velocity;
	c = height;
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-25 \n");
	printf("핼리콥터가 %.2lf km/h의 속력으로 수직하게 올라가고 있다.\n", velocity);
	printf("지면으로부터 %.lf m 높이에서 창문을 통해 상자를 떨어뜨렸다.\n\n", height);
	printf("그 상자가 지면에 지면에 도달하는 데 걸리는 시간은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("연직 위로 던진 물체의 운동입니다. \n");
		printf("y축에 대한 수직 성분만 고려합니다.\n\n");

		printf("시간을 구하기 위해서는 y = y0 + v0t + 1/2 * (-g) * t^2 공식을 사용합니다.\n");
		printf("최고점에서부터 상자가 낙하하고, 지면에 도달한 시간을 구하는 것이기 때문에 y와 y0는 0입니다.\n\n");

		printf("정리된 이차방정식 : 1/2 * %.2lf m/s^2 * t^2 + %.2lf m/s * t + %.lf = 0\n\n", -gravity_accel, velocity, height);
		printf("이차방정식의 해를 구하면 t1 = %.1lf s, t2 = %.1lf s 입니다.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("이때 시간은 음수가 될 수 없습니다.\n\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if ((-b + e) / (2.0 * a) > 0) {
			time = (-b + e) / (2.0 * a);
			printf("상자는 %.1lf 초 뒤에 지면에 도달합니다.\n\n", time);
		}
		else if ((-b - e) / (2.0 * a) > 0){
			time = (-b - e) / (2.0 * a);
			printf("상자는 %.1lf s 뒤에 지면에 도달합니다.\n\n", time);
		}
		else {
			printf("값이 올바르지 않습니다.\n\n");
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}
void Excersize_2_28(int solution, int answer)  // 한라대학교 미래모빌리티공학과 안성호 2023.04.16 완료
{
	double speed = 49;
	double g = 9.80;      // g는 gravitational_acceleration(중력 가속도).
	double time2 = 0;      // time2 는 물체가 다시 지면에서 떨어지는 데 걸리는 시간
	double time1 = 0;
	double H = 0;          // H는 최고 높이.
	double Δy = 0;
	Δy = H;
	printf("\n\n");
	printf("2-28 \n");
	printf("초속도  m/s로 연직 위로 던진 물체가 있다. \n\n");

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");


	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
				
		printf("최고 높이의 대한 공식은 최고 높이 속도의 제곱 - 던졌을때 속도의 제곱 = 2 * 가속도 * 최고 높이 - 시작 높이 \n");
		printf("v^2 - v0^2 = 2 * a * Δy 입니다.\n\n");
		printf("최고 높이에서의 속도는 0m/s 이므로. \n\n");		
		printf("최고 높이에 관한 식으로 표현하면 최고 높이 = 던졌을때 속도제곱 / 2 * 가속도 \n");
		printf("Δy = v0^2 / 2 * a \n\n");
		H = pow(speed, 2) / (g * 2);
		printf("최고 높이 %0.1lf m = 던졌을때 속도제곱 %.0lf m/s / (2 * 가속도 %.2lf) m/s^2\n\n", H, speed, g);

	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이는%0.1lf m\n\n", H);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
		printf("먼저 최대 높이 도달시간 공식을 구하세요. \n\n");
		printf("최대 높이 도달시간 공식은 : 최고 높이의 속도 = 던졌을때 속도 + (가속도 * 최고 높이 도달 시간) \n");
		printf("v = v0 + a * t \n\n");
		printf("최고 높이의 속도은 0m/s이므로 공식을 최대 높이 도달시간으로 만들면: \n");
		printf("최고 높이 도달 시간 = 던졌을때 속도 / 가속도 \n\n");
		printf("t = v0 / a \n\n");
		time1 = speed / g;
		printf("최고 높이 도달시간 %.0lf s= 던졌을때 속도 %.0lf m/s / 중력 가속도 %.2lf m/s^2\n\n", time1, speed, g);
		printf("물체가 다시 지면에서 떨어지는 데 걸리는 시간은 최고점 도달 시간에 * 2 한 값이므로: \n\n");
		time2 = time1 * 2;
		printf("최고 높이 도달시간 %.0lf s * 2 = 물체가 다시 지면에서 떨어지는 데 걸리는 시간 %.0lf s\n\n", time1, time2);
		printf("=================================================================\n\n");
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이 도달시간 %.0lf s * 2 = 물체가 다시 지면에서 떨어지는 데 걸리는 시간 %.0lf s\n\n", time1, time2);


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


	//Excersize_2_1(1,1);  // 완료
	//Excersize_2_3(1,1);  // 완료
	//Excersize_2_5(1,1);  // 완료
	//  Excersize_2_10(1,1); // 
	//  Excersize_2_9(1,1); // 
	//Excersize_2_11(1,1); // 완료
	//Excersize_2_13(1,1);

	Excersize_2_15(1, 1);
	//Excersize_2_19(1, 1); // 완료

	//Excersize_2_2(1, 0);
	//Excersize_2_12(1, 0);
    //  Excersize_2_21(1,1); //완료
	//Excersize_2_25(1, 1); //완료
	//Excersize_2_28(1,1);




}

