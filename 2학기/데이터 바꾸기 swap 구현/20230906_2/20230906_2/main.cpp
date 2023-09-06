#include <stdio.h>

void Swap(int* ap_x, int* ap_y)
{
    int temp;

    temp = *ap_x;    // temp ������ x ������ ������ �ִ� 3 ���� �����
    *ap_x = *ap_y;   // x ������ y �������� ����Ǿ� 7�� �����
    *ap_y = temp;    // y ������ temp�� ����ǵǾ� �ִ� x ���� ���Ե�   
}

int main()
{
    int x = 3, y = 7;

    printf("Before : x = %d, y = %d\n", x, y);

    Swap(&x, &y);

    printf("After  : x = %d, y = %d\n", x, y);

    return 0;
}