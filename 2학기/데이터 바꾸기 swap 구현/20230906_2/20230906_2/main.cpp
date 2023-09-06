#include <stdio.h>

void Swap(int* ap_x, int* ap_y)
{
    int temp;

    temp = *ap_x;    // temp 변수에 x 변수가 가지고 있던 3 값이 저장됨
    *ap_x = *ap_y;   // x 변수에 y 변수값이 저장되어 7로 변경됨
    *ap_y = temp;    // y 변수에 temp에 저장되되어 있는 x 값이 대입됨   
}

int main()
{
    int x = 3, y = 7;

    printf("Before : x = %d, y = %d\n", x, y);

    Swap(&x, &y);

    printf("After  : x = %d, y = %d\n", x, y);

    return 0;
}