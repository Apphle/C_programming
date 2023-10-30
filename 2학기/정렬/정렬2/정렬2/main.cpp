#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;

    if (num1 > num2)
        return 1;

    return 0;
}

int main() {
    int numArr[10] = { 0.0 };

    // ���� �б⸦ ���� ���� �����͸� �����ϰ� ���� ���� �õ�
    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "������ �� �� �����ϴ�.\n");
        return 1;
    }

    // ���Ͽ��� �����͸� �о� �迭�� ����
    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1) {
            fprintf(stderr, "���Ͽ��� �����͸� ���� �� �����ϴ�.\n");
            fclose(file); // ������ �ݰ� ���α׷� ����
            return 1;
        }
    }

    fclose(file); // ������ ����

    // ����
    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

    // ���ĵ� �迭 ���
    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    // ���ĵ� ���� ���Ͽ� ����
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        fprintf(stderr, "��� ������ �� �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(outputFile, "%d ", numArr[i]);
    }

    fclose(outputFile);

    printf("\n");

    return 0;
}
