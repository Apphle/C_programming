#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 금액으로 가격이 정해진 음료수를 구매하고, 빈 병을 모아 새로운 음료수를 구매하는 함수
int solution(int money, int price, int n) {
    int answer = 0; // 반환할 결과값

    int empty_bottle = answer = money / price; // 초기 빈 병 개수는 구매한 음료수의 개수

    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n; // 빈 병으로 새로운 음료수를 구매
        answer++; // 구매한 음료수 개수 증가
        empty_bottle++; // 새로 구매한 음료수로 인한 빈 병 개수 증가
    }

    return answer;
}

int main() {
    // 테스트 케이스 1
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 테스트 케이스 2
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
