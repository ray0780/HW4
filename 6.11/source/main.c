#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bo1(int a[]);
void bo2(int a[]);

int main(void)
{
	int a1[SIZE] = {33,2,42,6,19,62,77,68,45,37 },i,x;
	int a2[SIZE] = {33,2,42,6,19,62,77,68,45,37 };
	printf("最初的陣列: \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d", a1[i]);
	}
	printf("\n");
	printf("\n使用第一個氣泡排序: \n");
	bo1(a1);
	printf("\n使用第二個氣泡排序: \n");
	bo2(a2);
	system("pause");
	return 0;
}

void bo1(int a[])
{
	int i, j, x = 0,u;
	for (i = SIZE; i > 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j-1] > a[j] )
			{
				x = a[j-1];
				a[j-1] = a[j];
				a[j ] = x;
			}
		}
		printf("\n");
		for (u = 0; u < SIZE; u++)
		{
			printf("%3d", a[u]);
		}
	}
}

void bo2(int a[])
{
	int i, j, x = 0, u,jump;
	for (i = SIZE; i > 0; i--)
	{
		jump = 0;
		for (j = 1; j < i; j++)
		{
			if (a[j - 1] > a[j])
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
				jump = 1;
			}
		}
		if (jump == 0)
		{
			break;
		}
		printf("\n");
		for (u = 0; u < SIZE; u++)
		{
			printf("%3d", a[u]);
		}
	}
	printf("\n");
}