#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int count)
{
    int temp;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numArr[10];   // �迭�� �ʱ�ȭ���� ����

    // ���� �б⸦ ���� ���� �����͸� �����ϰ� ���� ���� �õ�
    FILE* file = fopen("input.txt", "r");
    if (file == NULL)
    {
        fprintf(stderr, "������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ��� �����͸� �о� �迭�� ����
    for (int i = 0; i < 10; i++)
    {
        if (fscanf(file, "%d", &numArr[i]) != 1)
        {
            fprintf(stderr, "���Ͽ��� �����͸� ���� �� �����ϴ�.\n");
            fclose(file); // ������ �ݰ� ���α׷� ����
            return 1;
        }
    }

    fclose(file); // ������ ����

    // �迭�� ����
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    // ���ĵ� �迭 ���
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    // ���ĵ� ���� ���Ͽ� ����
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        fprintf(stderr, "��� ������ �� �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(outputFile, "%d ", numArr[i]);
    }

    fclose(outputFile);

    return 0;
}
