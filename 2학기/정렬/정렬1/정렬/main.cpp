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
    int numArr[10];   // 배열을 초기화하지 않음

    // 파일 읽기를 위한 파일 포인터를 선언하고 파일 열기 시도
    FILE* file = fopen("input.txt", "r");
    if (file == NULL)
    {
        fprintf(stderr, "파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에서 데이터를 읽어 배열에 저장
    for (int i = 0; i < 10; i++)
    {
        if (fscanf(file, "%d", &numArr[i]) != 1)
        {
            fprintf(stderr, "파일에서 데이터를 읽을 수 없습니다.\n");
            fclose(file); // 파일을 닫고 프로그램 종료
            return 1;
        }
    }

    fclose(file); // 파일을 닫음

    // 배열을 정렬
    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    // 정렬된 배열 출력
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    // 정렬된 값을 파일에 저장
    FILE* outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
    {
        fprintf(stderr, "출력 파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(outputFile, "%d ", numArr[i]);
    }

    fclose(outputFile);

    return 0;
}
