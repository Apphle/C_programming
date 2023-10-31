#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, y1;
    double distance;
    double x2, y2;

    printf("직선의 방정식 ax + by + c = 0에서 a, b, c 값을 입력하세요: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("직선 밖의 점의 좌표 (x1, y1)를 입력하세요: ");
    scanf("%lf %lf", &x1, &y1);

    distance = fabs((a * x1 + b * y1 + c)) / sqrt(a * a + b * b);

    x2 = x1 - (a * (a * x1 + b * y1 + c)) / (a * a + b * b);
    y2 = y1 - (b * (a * x1 + b * y1 + c)) / (a * a + b * b);

    printf("점과 직선 사이의 거리: %lf\n", distance);
    printf("수직인 직선 위의 점의 좌표: (%lf, %lf)\n", x2, y2);

    return 0;
}