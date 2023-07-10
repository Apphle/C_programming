//////////// 덧셈식 출력하기 /////////////
/*#include <stdio.h>
int main(void) {
    int a;
    int b;
    int c;
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("%d + %d = %d", a, b, c);
    return 0;
}
//////////// 문자열 붙여서 출력하기 ////////
#include <stdio.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);

    printf("%s%s", s1, s2);
    return 0;
}
//////////// 문자열 돌리기 //////////
#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int len;
    scanf("%s", &s1);

    len = strlen(s1);

    for (int i = 0; i < len; i++) {
        printf("%c\n", s1[i]);
    }

    return 0;
}
///////////// 홀짝 구분하기 ///////////
#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("%d is even", a);
    else
        printf("%d is odd", a);

    return 0;
}
/////////// 문자열 겹쳐쓰기 //////////
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len1 = strlen(my_string);
    int len2 = strlen(overwrite_string);
    char* answer = (char*)malloc(sizeof(char) * len1);

    answer = my_string;

    for (int i = 0; i < len2; i++) {
        answer[i + s] = overwrite_string[i];
    }

    return answer;
}*/