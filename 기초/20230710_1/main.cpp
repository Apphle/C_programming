#include <stdio.h>

int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };// int�� a��� ������ 5����ŭ ���尡���� �迭�� ����

	for (int i = 0; i < 5; i++)
		printf("%d\n", a[i]);
}

int main(void)
{
	char str1[10] = "abc";
	char str2[10] = { 'a', 'b', 'c' }; // �Ѵ� ��°��� ���� 

	printf("%s\n", str1);
	printf("%s\n", str2);
}

int main(void)
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} }; //�迭�� ������ ��� ����
	int i, k;

	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++)
			printf("%d\n", a[i][k]);
	}
}