#include <stdio.h>

int main()
{
	int cnt;
	scanf("%d", &cnt);
	for (; cnt > 0; cnt--)
	{
		printf("Hello, world%d\n", cnt);
	}
	return 0;

	//////////////////////////////////////

	int  arr[10] = { 1, 2, -1, -2, 1, 2, -1, -2, 1, 2 };
	int tmp = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		tmp += arr[i];
	printf("°á°ú = %d", tmp);

	////////////////////////////////////////

	int dec = 17;
	int biny[20] = { 0, };
	int p = 0;

	for (;;)
	{
		biny[p] = dec % 2;
		dec = dec / 2;
		p++;
		if (dec == 0)
			break;
	}
	for (int i = p - 1; i >= 0; i--)
	{
		printf("%d", biny[i]);
	}

	/////////////////////////////////////////

	int a = 0;
	int b = 1;
	int c = 0;
	for (int i = 2; i <= 10; i++)
	{
		c = a + b;
		printf("%d %d %d\n", a, b, c);
		a = b;
		b = c;
	}
}