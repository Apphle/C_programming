//�ڷ��� ������[�迭�� ����];
/*#include <stdio.h>

int main()
{
	int array[3];
	int i;

	array[0] = 110; //[]�ȿ� ���ڸ� �־� ����
	array[1] = 220; //�� ���ڸ� �ε����� �ϸ�
	array[2] = 330; // 1�� �ƴ� 0���� �����Ѵ�

	for (i = 0; i < 3; i++)
		printf("array[%d]�� ��: %d \n", i, array[i]);
	return 0;
}*/
//int array[10] = { 4,1,7,64,3,18,9,2,1,33 }; [0]~[9] ����
//int array[] = { 4,1,7,64,3,18,9,2,1,33 }; �ʱ�ȭ �Ǵ� ���� ���������� �����Ϸ��� ���̸� ������

/*#include <stdio.h>

int main()
{
	printf("ABCDE\0FGHI"); // \0 �� �ڴ� ��µ��� �ʴ´�.
	printf("0123456\0 7891011");
	printf("������\0������");

	return 0;
}*/

#include <stdio.h>

/*int main()
{
	char string1[10] = "ABCDEF"; //
	char string2[] = "ABCDEF";
	char string3[] = { 'A', 'B', 'C', 'D', 'F' };
	char string4[] = { 'A', 'B', 'C', 'D', 'F', '\0' };

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
	return 0;
}*/

/*#include <stdio.h>

void func(int arr[], int len);

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	func(arr, sizeof arr / sizeof(int)); //func �Լ� ����

	return 0;
}

void func(int arr[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]); i �� �þ
	printf("\n");
}*/

/*#include <stdio.h>

void func(int arr[][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func(arr, 2);

	return 0;
}

void func(int arr[][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);// \t = �����̽��� �ι� �� ����
		printf("\n");
	}
}*/

