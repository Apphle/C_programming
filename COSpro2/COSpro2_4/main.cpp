#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
    int count = 0;
    int over[6][6];

    for (int i = 0; i < 6; i++)         // 행렬에 모서리 부분에 있어서 동서남북 이 없는경우를 없애기위해 임의의 행렬 추가
    {
        for (int j = 0; j < 6; j++)
        {
            over[i][j] = 51; // 지역의 높이가 1~50 사이니까 최대 51로 설정해서 행렬 만들기. 수가 높아야 안정적으로  위험지역을 구분할수 있음
        }
    }

    for (int i = 1; i < 5; i++)           // height 행렬에 들어갈 수
    {
        for (int j = 1; j < 5; j++)
        {
            over[i][j] = height[i - 1][j - 1];      // 계산
        }
    }

    for (int i = 1; i <= height_len; i++)
    {
        for (int j = 1; j <= height_len; j++)
        {
            if (over[i][j] < over[i][j - 1] && over[i][j] < over[i][j + 1] && over[i][j] < over[i - 1][j] && over[i][j] < over[i + 1][j])  //동서남북 비교
            {
                count++;   // 위험지역 일시 +1
            }
        }
    }
    return count;
}

int main()
{
    int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
    int height_len = 4;
    int ret = solution(height, height_len = 4);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);  // 위험지역 갯수
}