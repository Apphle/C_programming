//미래모빌리티공학과 이재혁 202315015 수업내용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
//#define STUDENTS 10

int main(void)
{
	srand(time(NULL));

	int freq[SIZE] = { 0 };
	int i, average;

	for (i = 0; i < 30000; i++) 
		++freq[rand() % 100];
	
	printf("================\n");
	printf("숫자 빈도\n");
	printf("================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d  %3d\n", i, freq[i]);

	return 0;
	/*
	int score[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하시오: ");
		scanf("%d", &score[i]);
		sum += score[i];
	}

	average = sum / STUDENTS;
	printf("성적 평균 %d", average);

	return 0;
	*/
}