#pragma warning(disable :4996)
#define MAX_LEN 100
#include <stdio.h>

int main()
{
    FILE* fs;  //������ ����ϱ� ���� ������ ����
    fs = fopen("test.txt", "r"); //fopen(" ��� ", " ��� ")�̹Ƿ� FILE* �� ���� fs�� test.txt������ �б� ���� ��
    char str[MAX_LEN];// char �� str�迭 ����
    fgets(str, MAX_LEN, fs);// fgets(����,���� ����,����) ���۴� char���� �迭�� �־��ָ� ��
    printf("%s", str);//���Ͽ��� �о�°� ���
    fclose(fs);// fopen ��, fclose�� ¦��
}

/*
int main()
{
    FILE* fs;
    fs = fopen("test.txt", "r");
    while (feof(fs) == 0) //feof ���� ���������Ͱ� �������� �ƴѰ��� �ִٸ� 0, �������� �ִٸ� 0�� �ƴѰ��� ��ȯ�� �ݴϴ�
    {// ��ʷ��� ���� �ٲ�� ���� �������� while�� feof�� �̿��ϸ� ���� �ٲ� ���������� ���
        char str[MAX_LEN];// char �� str�迭 ����
        fgets(str, MAX_LEN, fs);// fgets(����,���� ����,����) ���۴� char���� �迭�� �־��ָ� ��
        printf("%s", str);//���Ͽ��� �о�°� ���
    }
    fclose(fs);
}*/