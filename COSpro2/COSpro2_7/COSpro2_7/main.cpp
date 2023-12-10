#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_apple, int num_carrot, int k) {
    int answer = 0;

    while ((num_apple + num_carrot) - k >= 4 && num_apple >= 3 && num_carrot >= 1)// 토끼에게 줄것 빼고 주스 만들양 이 나오면 실행 
    {
        if (num_apple < 3 || num_carrot < 1)// 주스만들 분량 안나오면 반복 빠져나오기 
            break;
        num_apple -= 3;   //한잔 만들떄 필요한양 만큽 뺴기 
        num_carrot -= 1;  //한잔 만들떄 필요한양 만큽 뺴기 
        answer++;
    }

    return answer;
}

int main() {
    int num_apple1 = 5;
    int num_carrot1 = 1;
    int k1 = 2;
    int ret1 = solution(num_apple1, num_carrot1, k1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int num_apple2 = 10;
    int num_carrot2 = 5;
    int k2 = 4;
    int ret2 = solution(num_apple2, num_carrot2, k2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
