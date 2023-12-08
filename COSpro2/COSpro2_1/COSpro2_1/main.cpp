#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int number1, int number2)//�� ���� �ٲۼ�
{
    int ret = 0;

    if (number1 > number2)
        ret = number1 - number2;
    else
        ret = number2 - number1;

    return ret;
}

int func_b(int number)//�ڸ��� ���ϱ�
{
    int ret = 0;

    while (number != 0)
    {
        number = number / 10;
        ret++;
    }
    return ret;
}

int func_c(int number, int digit)//�� ������
{
    int ret = 0;

    for (int i = 0; i < digit; i++)
    {
        int temp = number % 10;     // 0      2     1

        number = number / 10;       // 12   1       0
        ret = ret * 10 + temp;      // 0    2     21  
    }

    return ret;
}

int solution(int number)
{
    int answer = 0;
    int digit = func_b(number);
    int convert_number = func_c(number, digit);
    answer = func_a(number, convert_number);

    return answer;
}

int main()
{
    int number1 = 120;
    int ret1 = solution(number1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int number2 = 23;
    int ret2 = solution(number2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}