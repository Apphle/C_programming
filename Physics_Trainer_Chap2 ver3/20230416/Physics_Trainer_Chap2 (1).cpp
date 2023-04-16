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
		printf("=================================================================\n");
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
	printf("어떤 사람이 고속도로를 처음 %.0lf km는 %.0lf km/h의 속력으로 달리고, \n", distance1, velocity1);
	printf("1시간 동안 점심식사를 한 후에 다시 %.0lf km를 %.0lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 v평균 = (나중 거리 - 처음 거리) / (나중 시간 - 처음 시간)입니다.\n"); // v = 속력

		printf("이 사람이 처음 %0.1lf km를 갔을 때 걸린 시간 %0.1lf h은 %0.1lf km (갈 때의 이동거리) / %0.1lf km/h (갈 때의 속력)이다. \n", distance1, time1, distance1, velocity1);
		printf("이 사람이 다시 %0.1lf km를 왔을 때 걸린 시간 %0.1lf h은 %0.1lf km (올 때의 이동거리) / %0.1lf km/h (올 때의 속력)이다. \n", distance2, time2, distance2, velocity2);
		all_time = time1 + time2 + rest;
		printf("이 사람의 여행과정에서 총 걸린시간%0.1lf h은 %0.1lf h + %0.1lf h + %0.1lf h이다. \n", all_time, time1, time2, rest);
		all_distance = distance1 + distance2;
		printf("이 사람의 여행과정에서 총 이동한 거리%0.1lf km는 %0.1lf km + %0.1lf km이다. \n", all_distance, distance1, distance2);



	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n");
		printf("이 사람의 여행과정에서 평균 속력은 총 이동 거리 / 총 걸린 시간이다.\n");
		all_distance = distance1 + distance2;
		printf("총 이동 거리: %0.1lf km\n", all_distance);
		all_time = time1 + time2 + 1;
		printf("총 걸린 시간: %0.1lf h\n", all_time);

		average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
		printf("%0.1lf km/h(평균 속력) = %0.1lf km(총 이동 거리) / %0.1lf h(총 걸린 시간)\n", average_velocity, all_distance, all_time);
		printf("이 사람의 여행과정에서 평균 속력: %.0lf km/h \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) 이 사람의 여행과정에서 평균 속도는 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
		printf("관련 공식은 s평균 = 변위 / 총 걸린 시간입니다.\n"); //s = 속도

		displacement = distance1 - distance2;
		printf("이 사람이 %0.1lf km갔다가 다시 %0.1lf km되돌아 왔을 때의 변위는 %0.1lf km이다.\n", distance1, distance2, displacement);
		all_time = time1 + time2 + rest;
		printf("이 사람의 여행과정에서 총 걸린시간%0.1lf h은 %0.1lf h+ %0.1lf h+ %0.1lf h이다. \n", all_time, time1, time2, rest);

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
		printf("이 사람의 여행과정에서 평균 속도는 변위 / 총 걸린 시간이다.\n");
		displacement = distance1 - distance2;
		printf("변위: %0.1lf km\n", displacement);
		all_time = time1 + time2 + 1;
		printf("총 걸린 시간: %0.1lf h\n", all_time);

		average_speed = displacement / (time1 + time2 + 1);
		printf("%0.1lf km/h(평균 속도) = %0.1lf km(변위) / %0.1lf h(총 걸린 시간)\n", average_speed, displacement, all_time);

		printf("이 사람의 여행과정에서 평균 속도: %.0lf km/h \n", average_speed);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}
/*
void Excersize_2_5(int solution, int answer)  // 한라대학교 미래모빌리티공학과 마성빈  2023.04.14 미완료
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
	printf("어떤 사람이 고속도로를 처음 %.0lf km는 %.0lf km/h의 속력으로 달리고, \n", distance1, velocity1);
	printf("1시간 동안 점심식사를 한 후에 다시 %.0lf km를 %.0lf km/h로 달려서 되돌아왔다. \n\n", distance2, velocity2);
	printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   =============================\n");
		printf("관련 공식은 v평균 = (xf - xi) / (tf - ti)입니다.\n"); // v = 속력

		printf("총 이동 거리를 구하기 위해서 속도와 시간을 알고 있으므로 x = v x t 공식을 사용합니다.n");


		printf("어떤 사람이 고속도로를 처음 %.0lf h 동안 0lfkm/h의 속력으로 달린  거리는 %.0lfkm이고 %. 달릴의 시간은 %.0lf h 입니다.\n", distance1, velocity1, time1);
		printf("이때의 평균 속도는 다음과 같습니다");
		printf("어떤 사람이 고속도로를 다시 %.0lfkm는 %.0lfkm/h의 속력으로 달릴의 시간은 %.0lf h 입니다.\n\n", distance2, velocity2, time2);



	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		xf1 = distance1;
		xi1 = 0;
		tf1 = velocity1;
		ti1 = 0;
		xf2 = distance2;
		xi2 = 0;
		tf2 = velocity2;
		ti2 = 0;

		printf("(a) 이 사람의 여행과정에서 평균 속력은 얼마인가? \n");
		h1 = (xf1 - xi1) / (tf1 - ti1);
		h2 = (xf2 - xi2) / (tf2 - ti2);
		time1 = h1;
		time2 = h2;
		average_velocity = (distance1 + distance2) / (time1 + time2 + 1);
		printf("이 사람의 여행과정에서 평균 속력은 다음과 같습니다. : %.0lf m/s \n", average_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("관련 공식은 변위 = 시작점에서 끝점까지의 위치변화입니다.\n");
		printf("관련 공식은 s평균 = 변위 / (time1 + time2 + 1) 입니다.\n"); //s = 속도

		displacement = distance1 - distance2;
		printf("이 사람이 어떤 장소를 갔다가 되돌아 왔을 때의 변위는 무엇인가?\n");
		printf("이 사람의 여행과정에서 변위는 다음과 같습니다. : %.0lf m/s \n\n", displacement);

	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 이 사람의 여행과정에서 평균 속도은 얼마인가?\n");
		h1 = (xf1 - xi1) / (tf1 - ti1);
		h2 = (xf2 - xi2) / (tf2 - ti2);
		time1 = h1;
		time2 = h2;
		average_speed = displacement / (time1 + time2 + 1);
		printf("이 사람의 여행과정에서 평균 속도는 다음과 같습니다. : %.0lf m/s \n", average_speed);


		printf("=================================================================\n");
		printf("\n\n\n");
	}




}

*/

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
	double num = 2;
	double a = 0;
	double a_1 = 0;
	double t = 0;


	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %5.2lf km/h이다.\n\n", velocity);  // %5.2lf로 아래도 통일할것
	printf("(a) 이 비행기가 활주로를 %5.2lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("문제 (a)에서 구하여야 하는것은 가속도 입니다.\n\n");

		printf("사용될 공식은 v^2 - v0^2 = 2 * a * x 입니다.\n\n");  //밑의 공식도 이렇게 바꾸세요

		printf(" 먼저 속도의 단위를 km/h 를 m/s 로 바꿔야 합니다.\n\n");

		printf(" km/h 를 m/s 로 바꾸려면 (v * 1000) / 3600 을 해 줘야 합니다.\n\n");

		printf(" 1000 을 곱하는 이유는 1km 가 1000m 이라서 이고,\n\n");

		printf(" 3600 을 나눠주는 이유는 1h 가 3600s 이기 때문입니다.\n\n");

		velocity_m = pow(velocity * m, 2) / pow(s, 2);

		printf(" m/s의 단위로 바꾼 속도의 값은 %5.2lf 입니다.\n\n", velocity_m);

		printf(" v^2은 나중속도 이므로 (%5.2lf m/s)^2 이고,\n\n", velocity_m);   // 120은 나중에 자동을 바뀔 값이므로 변수로 바꿀것

		printf(" v0^2은 처음속도 이므로 (0)^2 입니다.\n\n");

		velocity_1 = velocity_m - pow(velocity0, 2);

		printf(" v^2 - v0^2의 값은 %5.2lf입니다.\n\n", velocity_1);

		a_1 = num * distance;

		printf("2 * a * x를 계산하면 %5.2lf m/s 가 나옵니다.\n\n ", a_1);  // 다음오른쪽은 뭐지?

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf(" v^2 - v0^2 = 2 * a * x를 계산 하면\n\n");  // 공식 바꾸고

		a = velocity_1 / a_1;

		printf(" (a) 의 답 %5.2lf가 나옵니다.\n\n", a);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf(" (b)에서 구하여야 하는것은 시간 입니다.\n\n ");

		printf("(b)에서 필요한 공식은 v = v0 + a * t 입니다.\n\n");

		printf(" 이 식을 변형하면 t = (v - v0) / a 가 됩니다.\n\n");

		//printf(" %lf", velocity_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		t = ((velocity * m) / s) / a;

		printf(" 위의 식을 계산하면 (b)의 답 %5.2lf s 가 나옵니다.\n\n", t);

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
	double z = 0;
	double t = 0;
	double d = 0;
	double e = 0;
	double s_1 = 0;
	double ans_b = 0;
	double ans_c = 0;

	printf("\n\n");
	printf("2-27 \n");
	printf("그림과 같이 높이가 %.5.2lf m 의 절벽 끝에서 \n", height);
	printf("%.5.2lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다. \n\n", velocity);
	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 속력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("(a) 에서 구해야 하는것은 시간(s) 입니다.\n\n");

		printf("따라서 필요한 공식은 y = v0 * t - 1/2 * g * t^2 입니다.\n\n");

		printf("여기서 ( y(높이) = 75 m ) , ( v0(처음 속도) = 12.0 m/s ) , ( g(중력) = 9.8 ) 입니다.\n\n");

		printf("위의 것들을 대입하면 -75 = 12.0 t - 1/2 * 9.8 t^2 입니다.\n\n");

		printf("이때 y 에 (-)가 붙은 이유는 돌이 떨어지는 방향이 아래 이기 때문에 (-)를 곱해줘야 합니다.\n\n");

		printf("시간(s)를 구하려면 위의 식을 이차방정식으로 정리 해야 합니다.\n\n");

		printf("이차방정식 공식은 x^2 + y^2 + z = ans 입니다.\n\n");

		printf("-75 = 12.0 t - 1/2 * 9.8 t^2 이 식을 x^2 + y^2 + z = ans 형태로 정리하면 답이 나옵니다.\n\n");

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		t_square = half * gravity;

		t_1 = v0;

		z = height;

		printf("t^2 은: %.2lf 이고, t 는: %.2lf , z 는: %.2lf 이므로\n\n", t_square, t_1, z);

		printf("t^2 + t + z = ans 에다가 대입을 하면\n\n");

		d = t_1 * t_1 - 4.0 * t_square * z;

		e = sqrt(d);

		((-t_1 + e) / (2.0 * t_square) >= (-t_1 - e) / (2.0 * t_square));

		printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가 에서 걸린 시간은 t = %.2lf s 입니다.\n\n", (-t_1 - e) / (2.0 * t_square));

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		s_1 = (-t_1 - e) / (2.0 * t_square);

		printf("(b) 에서 구해야 하는것은 속력 입니다.\n\n");

		printf("속력을 구하는 공식은 v = v0 - g * t 입니다.\n\n");

		printf("(v 나중속도) , (v0 처음속도) , (g 중력) , (t 시간) 입니다.\n\n");

		printf("위 식에 대입을 하면 v = %5.2lf m/s %5.2lf m/s^2 * %5.2lf s 입니다.\n\n", velocity, gravity, s_1);

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		ans_b = velocity - gravity * s_1;

		printf("(b) 의 답 v = %5.2lf 입니다.", ans_b);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("(c) 에서 필요한 공식은\n\n");
		
		printf("v^2 - v0^2 = 2 * a * Δy 입니다.\n\n");

		printf("(v 나중속도 = 0) , (v0 처음속도 = 12) , (a 는 g(중력) 이므로 = -9.8) 입니다.\n\n");

		printf("(c)에서 구해야 하는것은 돌이 움직인 총 거리 이기 때문에 위 식을 변환하면\n\n");

		printf("Δy = v0^2 / 2 * g 가 됩니다.\n\n");

		printf("=================================================================\n");
	}
	if (answer == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		ans_c = (pow(v0, 2) / 2 * gravity);

		printf("(c) 의 답 은 %5.2lf 가 됩니다.\n\n", ans_c);
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
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고\n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);

	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가?\n\n");
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가?\n\n");
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
	printf("황영조 선수는 %4.1lf m를 %d시간 %d분 %d초에 뛰어 우승하였다.\n\n", distance1, h, m, s);
	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	int distance = 408;
	int T0 = 10;
	int hour = 12;
	int min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %d km이다\n", distance);
	printf("오전 %d 시에 서울역을 출발한 KTX가 %d 시 %d 분 부산역에 도착하였다.\n\n", T0, hour, min);

	printf("열차의 평균속력은 몇 m/s인가?\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("수평면 위에 정지하고 있던 물체가 한쪽 방향으로 직선운동을 할 때,\n");
	printf("물체의 이동거리와 시간의 관께가 그림 P2-4와 같다.\n\n");
	printf("(a) 출발하여 %d s 동안 물체의 평균속력은 몇 m/s인가?\n\n", a_average_velocity);

	printf("(b) 출발 후 %d s 때의 순간속력은 몇 m/s인가?\n\n", b_Instantaneous_speed);
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
	printf("어떤 사람이 고속도로를 처음 %d km는 %d km/h의 속력으로 달리고, %d 시간동안 점심식사를 한 후에 다시 %d km를 %d km/h의 속도로 달려서 되돌아왔다.\n\n", distance1, velocity1, h, distance2, velocity2);
	printf("이 사람의 여행과정에서(a) 평균속력과 (b) 평균속도를 구하라.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	int distance = 200;
	int sec = 25;

	printf("\n\n");
	printf("2-6 \n");
	printf("달리기 선수가 %d m 트랙 한 바퀴를  %d s에 돈다.\n\n", distance, sec);
	printf("선수의 (a) 평균속력과 (b) 평균속도를 구하라.\n\n");
	printf("(a) 평균속력\n\n");
	printf("(b) 평균속도\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("그림은 x축을 따라 1차원운동을 하는 물체의 변위와 시간 관계 그래프 이다. \n");
	printf("이 그래프를 보고 이 물체의 운동 상태를 시간대별로 설명하라.\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("가속도의 값이 +1이라는 의미는? \n\n");

	printf("(1) 속도의 변화가 없다.  \n");
	printf("(2) 속도가 점점 커진다.  \n");
	printf("(3) 속도가 점점 작아진다.\n");
	printf("(4) 속도가 일정하다. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 한다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	int accel = 1.7;
	int V = 90;
	int s = 110;


	printf("\n\n");
	printf("2-10 \n");
	printf("고속도로에서 어떤 자동차가 약 %d m/s^2의 가속도를 낼 수 있다.\n\n", accel);
	printf("이 비율로 %d km/h의 속도에서\n", V);
	printf("%d km/h로 가속하는데 걸리는 시간은 얼마나 될까?\n\n", s);
}

void Excersize_2_11(int solution, int answer)
{
	int velocity = 90;
	int distance = 50;

	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %d km/h의 속도로 달리다가 브레이크를 밟은후 %d m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", velocity, distance);
	printf("(a) 이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");
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
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("(a) 이 자동차의 가속도는 얼마인가?  \n\n", acceleration);
	printf("(b) 이 자동차가 그동안 달린 거리는 얼마인가?  \n", distance);
}

void Excersize_2_13(int solution, int answer)
{
	int sec1 = 7;
	int sec2 = 5;

	printf("\n\n");
	printf("2-13 \n");
	printf("자동차가 직선 도로를 달릴 때의 v-t 그래프이다. \n\n");
	printf("(a) 이 자동차의 a-t 그래프를 그리라. \n\n");
	printf("(b) 자동차가 처음 %d s 동안 이동한 거리는 얼마인가?\n\n", sec1);
	printf("(c) 이 자동차의 처음 %d s 동안의 평균속도 및 평균가속도는 각각 얼마인가 ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %d m/s에 도달해야 한다.\n", speed);
	printf("%3.0lf m/s^2으로 일정하게 가속한다면\n\n", acceleration);
	printf("이륙속도에 도달하기 위해서 얼마의 활주거리가 필요한가?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	int velocity1 = 120;
	int distance1 = 240;

	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %d km/h이다.\n\n", velocity1);
	printf("(a) 이 비행기가 활주로를 %d m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance1);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");
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
	printf("어떤 육상 선수가 %d m를 %.1lf min 이내에 주파하려고 한다.\n\n", distance1, min);
	printf("정확히 %d min 지난 후에 달려야 할 거리가 %d m 남았다.\n\n", min2, distance2);
	printf("그런데 이 육상 선수가 원하는 시간 내에 주파하기 위해서는 %.2lf m/s^2 의 가속도로 몇 초 동안 가속해야 하는가?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	int speed1 = 10;
	int speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("처음에 동쪽으로 %.lf m/s 의 속도로 운동하던 물체가 일정한 비율로   \n", velocity1);
	printf("속도가 변하여 %d s 후 서쪽으로 %.lf m/s 로 운동하였다.     \n\n", speed1, velocity2);

	printf("(a) %d 동안 속도의 변화량은 얼마인가?  \n\n", speed1);
	printf("(b) 가속도의 크기는 얼마이며, 그방향은 어느 방향인가?  \n\n");
	printf("(c) 출발한 지 몇 초 후메 속도가 %d 이 되는가?  \n\n", speed2);
	printf("(d) 속도가 %d 이 될 때까지 이동한 거리는 얼마인가?  \n\n", speed2);
	printf("(e) 출발한 지 %d s 후의 변위와 이동한 거리는 각각 얼마인가?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	int velocity = 40;
	double speed = 0.50;
	int time = 1;
	int time2 = 1;

	printf("\n\n");
	printf("2-18 \n");
	printf("%d km/h의 속력으로 달리는 자동차가 연료가 떨어져서   \n", velocity);
	printf("일정한 가속도 %.2lf m/s제곱으로 감속되었다. \n\n", speed);

	printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n");

	printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n");

	printf("(c) 자동차가 처음 %d s 동안 이동한 거리와 다섯 번재 %d s 동안에 이동한  거리는 각각 얼마인가? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	int velocity = 120;
	int acceleration = 10;

	printf("\n\n");
	printf("2-19 \n");
	printf("%d km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %d km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	int Va = 24;
	int Vb = 20;
	int V0a = 5;
	int V0b = 5;

	printf("\n\n");
	printf("2-20 \n");
	printf("%d m/s로 달리던 자동차 A와\n", Va);
	printf("%d m/s로 달리던 자동차 B가 동시에 브레이크를 밟아 일정하게 감속시켜서 자동차 A는 %d s만에 자동차 B는 %d s만에 정지하였다 \n\n", Vb, V0a, V0b);
	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마일까?\n\n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초일까?\n\n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 걸리는가?\n\n");
	printf("(d) 자동차 A가 B와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인까?\n\n");
}

void Excersize_2_21(int solution, int answer)
{
	int height = 360;

	printf("\n\n");
	printf("2-21 \n");
	printf("만약 높이가 %d m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", height);
	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");

	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
}

void Excersize_2_22(int solution, int answer)
{
	int V = 10;
	int sec = 2;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %d m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);
	printf("(a) 공을 던진 후 %d s 후의 속도를 구하라.\n\n", sec);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n", distance);
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("2-23 \n");
	printf("낙하하는 돌이 높이가 %.1lf m 인 창문을 지나가는 데 %.1lf s 걸린다.\n\n", high, sec);
	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;

	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %39.2lf m인 10층 옥상에서\n", height);
	printf("공을 수평방향으로 초속도 %d m/s로 던졌다.\n\n", second_velocity);
	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	int distance1 = 100;

	printf("\n\n");
	printf("2-25 \n");
	printf("헬리콥터가 %.2lf m/s의 속력으로 수직하게 올라가고 있다.\n", velocity1);
	printf("지면으로부터 %d m 높이에서 창문을 통해 상자를 떨어뜨렸다. \n\n", distance1);
	printf("그 상자가 지면에 도달하는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");
	printf("(a) 돌은 %.1lf m에서 얼마나 빨리 운동하겠는가?\n\n", distance);
	printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?\n\n");
	printf("(c) (b)에서 답이 두 개인 이유가 무엇인가?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("그림과 같이 높이가 %.lf m 의 절벽 끝에서             \n", high);
	printf("%.lf m/s 의 속력으로 돌을 수직 상방으로 던져 올렸다. \n\n", velocity);

	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 솔력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");
}

void Excersize_2_28(int solution, int answer)
{
	printf("\n\n");
	printf("2-28 \n");
	printf("초속도  m/s로 연직 위로 던진 물체가 있다. \n\n");

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");
}

void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");
	printf("2-29 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");
	printf("이 운동에 대해 잘못 설명한 것은?\n\n");
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