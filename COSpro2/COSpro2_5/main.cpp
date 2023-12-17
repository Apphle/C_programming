#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)        //�⸻ - �߰� 
        if (answer < scores2[i] - scores1[i])   //10-20 = (-10)(�ּ�), 50-50 = 0, 70-40 = 30(�ִ�)
        {
            answer = scores2[i] - scores1[i];
        }
    return answer;    //answer = 0 ���� 30�� ũ�ϱ� ���� �� �� 30
}

int func_b(int scores1[], int scores2[], int scores_len)
{
    int answer = 0;
    for (int i = 0; i < scores_len; i++)        // �⸻ - �߰�
        if (answer > scores2[i] - scores1[i])        // -10 0 30                    
        {
            answer = scores2[i] - scores1[i];       //-10
        }
    return answer;  // -10 ���� ������ ��� ���� �� -10
}

int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len)
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);
    answer[1] = func_b(mid_scores, final_scores, mid_scores_len); //�߰� - �⸻ (�ٲ������)
    return answer;
}

int main()
{
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };
    int* ret = solution(mid_scores, 3, final_scores, 3);

    printf("solution �Լ��� ��ȯ ���� [");

    for (int i = 0; i < 2; i++)
    {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }

    printf("] �Դϴ�.\n");

    // �޸� ����
    free(ret);

    return 0;
}