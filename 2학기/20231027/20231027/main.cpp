#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_NO_CAPACITOR 10

int main() 
{
    int choice, num;
    double capacitors[MAX_NO_CAPACITOR] = { 0 };

    printf("���� ���� (Serial Connection)\n");
    printf("���� ���� (Parallel Connection)\n");
    printf("�����̶�� 1 ���ľƶ�� 2�� �Է��ϼ��� : ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) 
    {
        printf("�߸��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    printf("Ŀ�н����� ������ �Է��Ͻʽÿ� (�ִ� %d��): ", MAX_NO_CAPACITOR);
    scanf("%d", &num);

    if (num < 1 || num > MAX_NO_CAPACITOR) 
    {
        printf("��ȿ���� ���� Ŀ�н��� �����Դϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    for (int i = 0; i < num; i++) 
    {
        printf("Ŀ�н��� %d�� �� (F): ", i + 1);
        scanf("%lf", &capacitors[i]);
    }

    double total;

    if (choice == 1)

    { // ���� ���� // ���װ� �ݴ�� ĳ�н��ʹ� ������ 1.0 / capacitors[i] 
        total = 0.0;
        for (int i = 0; i < num; i++) 
        {
            total += 1.0 / capacitors[i];
        }
        total = 1.0 / total;
        printf("���� = total += 1.0 / capacitors[i]\n");
    }
    else if (choice == 2) 
    { // ���� ����
        total = 0.0;
        for (int i = 0; i < num; i++) 
        {
            total += capacitors[i];
        }
        printf("���� = total += capacitors[i]");
    }

    printf("�ռ� Ŀ�н��� ��: %.2lf F\n", total);

    return 0;
}