#pragma warning(disable :4996)
#define MAX_LEN 100
#include <stdio.h>

int main()
{
    FILE* fs;  //파일을 사용하기 위한 포인터 변수
    fs = fopen("test.txt", "r"); //fopen(" 경로 ", " 모드 ")이므로 FILE* 형 변수 fs에 test.txt파일이 읽기 모드로 들어감
    char str[MAX_LEN];// char 형 str배열 선언
    fgets(str, MAX_LEN, fs);// fgets(버퍼,읽을 길이,파일) 버퍼는 char형의 배열을 넣어주면 됨
    printf("%s", str);//파일에서 읽어온값 출력
    fclose(fs);// fopen 과, fclose는 짝궁
}

/*
int main()
{
    FILE* fs;
    fs = fopen("test.txt", "r");
    while (feof(fs) == 0) //feof 현재 파일포인터가 마지막이 아닌곳에 있다면 0, 마지막에 있다면 0이 아닌값을 반환해 줍니다
    {// 우너래는 줄이 바뀌면 읽지 못하지만 while과 feof을 이용하며 줄이 바뀌어도 마지막까지 출력
        char str[MAX_LEN];// char 형 str배열 선언
        fgets(str, MAX_LEN, fs);// fgets(버퍼,읽을 길이,파일) 버퍼는 char형의 배열을 넣어주면 됨
        printf("%s", str);//파일에서 읽어온값 출력
    }
    fclose(fs);
}*/