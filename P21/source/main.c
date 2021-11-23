#include <stdio.h>
#include <stdlib.h>

void stat(void);
void automa(void);

int main(void)
{
	printf("First call to each function: \n");
	stat();
	automa();

	printf("\n\nSecond call to each function: \n");
	stat();
	automa();
	printf("\n");
	system("pause");
	return 0;
}

void stat(void)
{
	static int arr[3];
	int i;

	printf("\nValues on entering staticArrayInit: \n");

	for (i = 0; i <= 2; i++)
	{
		printf("array[%d] = %d ", i, arr[i]);
	}

	printf("\nValues on exiting staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array[%d] = %d ", i, arr[i] += 5);
	}
}

void automa(void)
{
	int arr2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on extering automaicArrayInit: \n");

	for (i = 0; i <= 2; i++)
	{
		printf("arrary2[%d] = %d", i, arr2[i]);
	}

	printf("\n\nValues on extering automaicArrayInit: \n");
	
	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, arr2[i] += 5);
	}
}