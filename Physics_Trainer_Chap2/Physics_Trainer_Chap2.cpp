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
	printf("�׸��� x���� ���� 1������� �ϴ� ��ü�� ������ �ð� ���� �׷��� �̴�. \n");
	printf("�� �׷����� ���� �� ��ü�� � ���¸� �ð��뺰�� �����϶�. \n\n");
	
}


void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	int speed1 = 10;
	int speed2 = 0;


	printf("\n\n");
	printf("2-17 \n");
	printf("ó���� �������� %.lf m/s �� �ӵ��� ��ϴ� ��ü�� ������ ������ \n", velocity1);
	printf("�ӵ��� ���Ͽ� %d s �� �������� %.lf m/s �� ��Ͽ���. \n\n", speed1, velocity2);

	printf("(a) %d s ���� �ӵ��� ��ȭ���� ���ΰ�? \n\n", speed1);
	printf("(b) ���ӵ��� ũ��� ���̸�, �� ������ ��� �����ΰ�? \n\n");
	printf("(c) ����� �� �� �� �Ŀ� �ӵ��� %d s �� �Ǵ°�? \n\n", speed2);
	printf("(d) �ӵ��� %d s �� �� ������ �̵��� �Ÿ��� ���ΰ�? \n\n", speed2);
	printf("(e) ����� �� %d s ���� ������ �̵��� �Ÿ��� ���� ���ΰ�? \n\n", speed1);


}


void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %.lf m �� ���� ������ \n", high);
	printf("%.lf m/s �� �ӷ����� ���� ���� ������� ���� �÷ȴ�. \n\n", velocity);

	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�? \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ӷ��� ���ΰ�? \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�? \n\n");




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
