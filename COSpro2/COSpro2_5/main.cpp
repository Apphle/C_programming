#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)        //기말 - 중간 
        if (answer < scores2[i] - scores1[i])   //10-20 = (-10)(최소), 50-50 = 0, 70-40 = 30(최대)
        {
            answer = scores2[i] - scores1[i];
        }
    return answer;    //answer = 0 보다 30이 크니깐 실행 후 답 30
}

int func_b(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)        // 기말 - 중간
        if (answer > scores2[i] - scores1[i])        // -10 0 30                    
        {
            answer = scores2[i] - scores1[i];       //-10
        }
    return answer;  // -10 보다 작은게 없어서 실행 닶 -10
}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
    answer[1] = func_b(mid_scores, final_scores, mid_scores_len); //중간 - 기말 (바뀌어있음)
    return answer;
}

int main()
{
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution 함수의 반환 값은 [");

    for (int i = 0; i < 2; i++)
    {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }

    printf("] 입니다.\n");

    // 메모리 해제
    free(ret);

    return 0;
}