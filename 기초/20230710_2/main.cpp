//자료형 변수명[배열의 길이];
/*#include <stdio.h>

int main()
{
	int array[3];
	int i;

	array[0] = 110; //[]안에 숫자를 넣어 지정
	array[1] = 220; //이 숫자를 인덱스라 하며
	array[2] = 330; // 1이 아닌 0부터 시작한다

	for (i = 0; i < 3; i++)
		printf("array[%d]의 값: %d \n", i, array[i]);
	return 0;
}*/
//int array[10] = { 4,1,7,64,3,18,9,2,1,33 }; [0]~[9] 생성
//int array[] = { 4,1,7,64,3,18,9,2,1,33 }; 초기화 되는 데잍 개수에따라 컴파일러가 길이를 정해줌

/*#include <stdio.h>

int main()
{
	printf("ABCDE\0FGHI"); // \0 의 뒤는 출력되지 않는다.
	printf("0123456\0 7891011");
	printf("ㄱㄴㄷ\0ㄹㅁㅂ");

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

	func(arr, sizeof arr / sizeof(int)); //func 함수 실행

	return 0;
}

void func(int arr[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]); i 가 늘어남
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
			printf("%d\t", arr[i][j]);// \t = 스페이스바 두번 과 같음
		printf("\n");
	}
}*/

