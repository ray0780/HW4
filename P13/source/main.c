#include <stdio.h>
#include <stdlib.h>

void printaa(const int a[][3]);


int main(void)
{
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int arr2[2][3] = { 1,2,3,4,5 };
	int arr3[2][3] = { {1,2},{4} };

	printf("Value in array by row are:\n");
	printaa(arr);

	printf("Values in arrary2 by row are:\n");
	printaa(arr2);

	printf("Values in arrary3 by row are:\n");
	printaa(arr3);
	system("pause");
	return 0;
}

void printaa(const int a[][3])
{
	int i, j;
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	
}