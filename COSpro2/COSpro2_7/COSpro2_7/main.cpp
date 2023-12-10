#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;

    while ((num_apple + num_carrot) - k >= 4 && num_apple >= 3 && num_carrot >= 1)// �䳢���� �ٰ� ���� �ֽ� ����� �� ������ ���� 
    {
        if (num_apple < 3 || num_carrot < 1)// �ֽ����� �з� �ȳ����� �ݺ� ���������� 
            break;
        num_apple -= 3;   //���� ���鋚 �ʿ��Ѿ� ��Ů ���� 
        num_carrot -= 1;  //���� ���鋚 �ʿ��Ѿ� ��Ů ���� 
        answer++;
    }

    return answer;
}

int main() {
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}
