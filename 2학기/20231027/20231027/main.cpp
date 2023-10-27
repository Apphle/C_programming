#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_CAPACITOR 10

int main() 
{
    int choice, num;
    double capacitors[MAX_NO_CAPACITOR] = { 0 };

    printf("직렬 연결 (Serial Connection)\n");
    printf("병렬 연결 (Parallel Connection)\n");
    printf("직렬이라면 1 병렬아라면 2를 입력하세요 : ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) 
    {
        printf("잘못된 선택입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    printf("커패시터의 개수를 입력하십시오 (최대 %d개): ", MAX_NO_CAPACITOR);
    scanf("%d", &num);

    if (num < 1 || num > MAX_NO_CAPACITOR) 
    {
        printf("유효하지 않은 커패시터 개수입니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    for (int i = 0; i < num; i++) 
    {
        printf("커패시터 %d의 값 (F): ", i + 1);
        scanf("%lf", &capacitors[i]);
    }

    double total;

    if (choice == 1)

    { // 직렬 연결 // 저항과 반대로 캐패시터는 직렬이 1.0 / capacitors[i] 
        total = 0.0;
        for (int i = 0; i < num; i++) 
        {
            total += 1.0 / capacitors[i];
        }
        total = 1.0 / total;
        printf("계산식 = total += 1.0 / capacitors[i]\n");
    }
    else if (choice == 2) 
    { // 병렬 연결
        total = 0.0;
        for (int i = 0; i < num; i++) 
        {
            total += capacitors[i];
        }
        printf("계산식 = total += capacitors[i]");
    }

    printf("합성 커패시터 값: %.2lf F\n", total);

    return 0;
}