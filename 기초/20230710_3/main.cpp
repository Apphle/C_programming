/*#include <stdio.h>
int main(void)
{
	int score[10] = { 1, 21, 31, 41, 51, 61, 71, 81, 91, 100 };
	int a;
	for (a = 0; a < 10; a++)
		printf("%d ", score[a]);
}*/


/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int score[6];
    int i, a,sum = 0;

    for (i = 0; i < 6; i++) {
        printf("학생 %d 성적을 입력입력하세요 : ", i + 1);
        scanf("%d", &score[i]); //6번 성적 입력 받기
    }

    for (i = 0; i < 6; i++)
        sum += score[i]; // 입력받은 성적 더하기

    printf("합계 : %d\n", sum); // 총합
    printf("평균 : %.2lf\n", (double)sum / 6); // 평균 구하기
    printf("\n score[6]에 저장되어있는 숫자:\n");

    for (a = 0; a < 6; a++)
        printf(" %d", score[a]);

    return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char string1[6] = { 'H', 'e', 'l', 'l', 'o' };
    char string2[6] = "world";
    char string3[10];

    printf("이름을 입력하세요: ");
    scanf("%s", &string3);

    printf("%s\n", string1);
    printf("%s\n", string2);
    printf("%s %s %s님 안녕하세요 \n", string1, string2, string3);

    return 0;
}*/