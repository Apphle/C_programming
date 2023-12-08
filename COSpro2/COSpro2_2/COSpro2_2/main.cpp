#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �ݾ����� ������ ������ ������� �����ϰ�, �� ���� ��� ���ο� ������� �����ϴ� �Լ�
int solution(int money, int price, int n) {
    int answer = 0; // ��ȯ�� �����

    int empty_bottle = answer = money / price; // �ʱ� �� �� ������ ������ ������� ����

    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n; // �� ������ ���ο� ������� ����
        answer++; // ������ ����� ���� ����
        empty_bottle++; // ���� ������ ������� ���� �� �� ���� ����
    }

    return answer;
}

int main() {
    // �׽�Ʈ ���̽� 1
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �׽�Ʈ ���̽� 2
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}
